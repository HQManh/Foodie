// rea decompile_all
// name: MessagePack.Formatters.StringInterningFormatter$$Deserialize
// address: 0x73e8adc
// body: available
// range: 0x73e8adc-0x73e8d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e8c68 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e8ccc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e8d54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e8d58 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_StringInterningFormatter__Deserialize(undefined8 param_1,void *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 *__s;
  undefined1 auVar9 [16];
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  ulong local_e0;
  undefined1 auStack_d8 [144];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_09520dd8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba9a0);
    FUN_03f5c2a4(&DAT_0918b398);
    FUN_03f5c2a4(&DAT_091da538);
    DAT_09520dd8 = 1;
  }
  memset(auStack_d8,0,0x90);
  local_e8 = 0;
  local_e0 = 0;
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar3 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar3 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    uVar5 = 0;
  }
  else {
    memcpy(auStack_d8,param_2,0x90);
    uVar6 = MessagePack_MessagePackReader__TryReadStringSpan(param_2,&local_e8,0);
    if ((uVar6 & 1) != 0) {
      uVar2 = (uint)local_e0;
      if ((int)(uint)local_e0 < 0x1000) {
        uVar6 = local_e0 & 0xffffffff;
        if ((uint)local_e0 == 0) {
          uVar5 = **(undefined8 **)(DAT_09535468 + 0xb8);
        }
        else {
          __s = auStack_f0 + -((long)(int)(uint)local_e0 * 2 + 0xfU & 0xfffffffffffffff0);
          memset(__s,0,(long)(int)(uint)local_e0 * 2);
          if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          if (*(int *)(DAT_0918b398 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar8 = (long *)**(long **)(DAT_0918b398 + 0xb8);
          if (plVar8 == (long *)0x0) {
            uVar5 = 0;
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_073e8d58;
          }
          uVar4 = (**(code **)(*plVar8 + 0x308))
                            (plVar8,local_e8,local_e0,__s,uVar6,*(undefined8 *)(*plVar8 + 0x310));
          if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          auVar9 = FUN_06109338(__s,uVar4,DAT_091ba9a0);
          uVar5 = Microsoft_NET_StringTools_Strings__WeakIntern(auVar9._0_8_,auVar9._8_8_,0);
        }
        goto LAB_073e8d1c;
      }
      memcpy(param_2,auStack_d8,0x90);
      thunk_FUN_03f5d7b8((long)param_2 + 8,0);
    }
    lVar7 = FUN_0642e0c8(param_2,0);
    uVar5 = 0;
    if (lVar7 != 0) {
      uVar5 = Microsoft_NET_StringTools_Strings__WeakIntern(lVar7,0);
    }
  }
LAB_073e8d1c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_073e8d58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

