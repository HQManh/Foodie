// rea decompile_all
// name: System.String$$ReplaceHelper
// address: 0x743264c
// body: available
// range: 0x743264c-0x743298b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74327a0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743281c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74328fc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432988 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__ReplaceHelper(long param_1,int param_2,long param_3,int *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long local_70;
  ulong uStack_68;
  
  if ((DAT_0952101f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97d0);
    FUN_03f5c2a4(&DAT_091b9890);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba948);
    DAT_0952101f = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  if (param_3 != 0) {
    if (0x7fffffff <
        (long)*(int *)(param_1 + 0x10) +
        (long)(int)param_5 * (long)(*(int *)(param_3 + 0x10) - param_2)) {
      thunk_FUN_03fc39d4(&DAT_09188d60);
      uVar6 = thunk_FUN_03f9944c();
      System_OutOfMemoryException___ctor(uVar6,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091da368);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
    lVar5 = thunk_FUN_03f968a0();
    if (lVar5 != 0) {
      uVar3 = *(uint *)(lVar5 + 0x10);
      lVar1 = lVar5 + 0x14;
      if ((int)param_5 < 1) {
        uVar12 = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        uVar12 = 0;
        lVar2 = param_3 + 0x14;
        uVar11 = (ulong)param_5;
        do {
          iVar4 = *param_4;
          uVar8 = iVar4 - uVar10;
          uVar9 = (ulong)uVar8;
          if (uVar8 != 0) {
            if (DAT_09520e02 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09520e02 = '\x01';
            }
            if ((*(uint *)(param_1 + 0x10) < uVar10) || (*(uint *)(param_1 + 0x10) - uVar10 < uVar8)
               ) {
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
            }
            local_70 = param_1 + 0x14 + (long)(int)uVar10 * 2;
            uStack_68 = uVar9;
            if (uVar3 < uVar12) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
            }
            if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            FUN_05ff6b08(&local_70,lVar1 + (long)(int)uVar12 * 2,uVar3 - uVar12,DAT_091b97d0);
            uVar12 = uVar8 + uVar12;
          }
          if (DAT_09515cf2 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09515cf2 = '\x01';
          }
          uStack_68 = (ulong)*(uint *)(param_3 + 0x10);
          local_70 = lVar2;
          if (uVar3 < uVar12) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uVar10 = iVar4 + param_2;
          FUN_05ff6b08(&local_70,lVar1 + (long)(int)uVar12 * 2,uVar3 - uVar12,DAT_091b97d0);
          uVar11 = uVar11 - 1;
          uVar12 = *(int *)(param_3 + 0x10) + uVar12;
          param_4 = param_4 + 1;
        } while (uVar11 != 0);
      }
      if (DAT_09521039 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09521039 = '\x01';
      }
      if (param_1 == 0) {
        if (uVar10 != 0) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
        }
        local_70 = 0;
        uStack_68 = 0;
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x10);
        if (uVar8 < uVar10) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
          uVar8 = *(uint *)(param_1 + 0x10);
        }
        uStack_68 = (ulong)(uVar8 - uVar10);
        local_70 = param_1 + (long)(int)uVar10 * 2 + 0x14;
      }
      if (uVar12 <= uVar3) {
        if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        FUN_05ff6b08(&local_70,lVar1 + (long)(int)uVar12 * 2,uVar3 - uVar12,DAT_091b97d0);
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

