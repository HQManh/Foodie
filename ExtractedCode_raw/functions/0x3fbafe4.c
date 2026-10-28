// rea decompile_all
// name: FUN_03fbafe4
// address: 0x3fbafe4
// body: available
// range: 0x3fbafe4-0x3fbb323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbb0f0 to 0x3fe0300 FUN_03fe0300 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fbb2e8 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbafe4(long param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  pthread_t pVar4;
  undefined8 uVar5;
  pthread_t pVar6;
  long lVar7;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    pVar4 = pthread_self();
    if (pVar4 == DAT_09535808) {
      DAT_09535810 = DAT_09535810 + 1;
      pVar4 = DAT_09535808;
    }
    else {
      uVar5 = 0;
      do {
        iVar3 = (int)uVar5;
        uVar5 = FUN_0404bd00(uVar5,iVar3 + 1,&DAT_095357c8);
        iVar2 = (int)uVar5;
        if (iVar2 == iVar3) break;
      } while (iVar2 != 2);
      while (iVar2 != 0) {
        FUN_03fe02a8(&DAT_095357c8,2,0xffffffff);
        iVar2 = FUN_0404be70(2,&DAT_095357c8);
      }
    }
    DAT_09535808 = pVar4;
    iVar3 = FUN_0404bd80(1,1,param_1 + 0xe4);
    DataMemoryBarrier(2,3);
    if (iVar3 == 1) {
      if (DAT_09535810 == 0) {
        DAT_09535808 = 0;
        iVar3 = FUN_0404bea0(0,&DAT_095357c8);
        if (iVar3 == 2) {
          FUN_03fe0300(&DAT_095357c8,1,0);
          return;
        }
      }
      else {
        DAT_09535810 = DAT_09535810 + -1;
      }
    }
    else {
      iVar3 = FUN_0404bd80(1,1,param_1 + 0xe0);
      DataMemoryBarrier(2,3);
      if (iVar3 == 1) {
        if (DAT_09535810 == 0) {
          DAT_09535808 = 0;
          iVar3 = FUN_0404bea0(0,&DAT_095357c8);
          if (iVar3 == 2) {
            FUN_03fe0300(&DAT_095357c8,1,0);
          }
        }
        else {
          DAT_09535810 = DAT_09535810 + -1;
        }
        pVar4 = pthread_self();
        pVar6 = FUN_0404be00(pVar4,pVar4,param_1 + 0xe8);
        DataMemoryBarrier(2,3);
        if (pVar6 == pVar4) {
          return;
        }
        while( true ) {
          iVar3 = FUN_0404bd80(1,1,param_1 + 0xe4);
          DataMemoryBarrier(2,3);
          if (iVar3 == 1) break;
          lVar7 = FUN_0404be00(0,0,param_1 + 0xd8);
          DataMemoryBarrier(2,3);
          if (lVar7 != 0) break;
          thunk_FUN_03f8a1a4(1,0);
        }
      }
      else {
        pVar4 = pthread_self();
        FUN_0404bf00(pVar4,param_1 + 0xe8);
        DataMemoryBarrier(2,3);
        FUN_0404bed0(1,param_1 + 0xe0);
        DataMemoryBarrier(2,3);
        if (DAT_09535810 == 0) {
          DAT_09535808 = 0;
          iVar3 = FUN_0404bea0(0,&DAT_095357c8);
          if (iVar3 == 2) {
            FUN_03fe0300(&DAT_095357c8,1,0);
          }
        }
        else {
          DAT_09535810 = DAT_09535810 + -1;
        }
        local_38 = 0;
        lVar7 = FUN_03fc1684(param_1);
        if (lVar7 != 0) {
          FUN_03fbcba4(lVar7,0,0,&local_38);
        }
        FUN_0404bf00(0,param_1 + 0xe8);
        DataMemoryBarrier(2,3);
        if (local_38 == 0) {
          FUN_0404bed0(1,param_1 + 0xe4);
          DataMemoryBarrier(2,3);
        }
        else {
          FUN_03fb7b60(local_68,param_1 + 0x20,0);
          pvVar1 = (void *)((ulong)local_68 | 1);
          if ((local_68[0] & 1) != 0) {
            pvVar1 = local_58;
          }
          FUN_03f92510(local_50,"The type initializer for \'%s\' threw an exception.",pvVar1);
          if ((local_68[0] & 1) != 0) {
            operator_delete(local_58);
          }
          pvVar1 = (void *)((ulong)local_50 | 1);
          if ((local_50[0] & 1) != 0) {
            pvVar1 = local_40;
          }
          uVar5 = FUN_03fa67e8(pvVar1,local_38);
          FUN_03fbf3d0(param_1,uVar5);
          if ((local_50[0] & 1) != 0) {
            operator_delete(local_40);
          }
        }
      }
      if (*(long *)(param_1 + 0xd8) != 0) {
        uVar5 = FUN_03f5dff4();
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(uVar5,0);
      }
    }
  }
  return;
}

