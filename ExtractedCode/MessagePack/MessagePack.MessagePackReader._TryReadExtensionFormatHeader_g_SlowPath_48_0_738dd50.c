// rea decompile_all
// name: MessagePack.MessagePackReader$$<TryReadExtensionFormatHeader>g__SlowPath|48_0
// address: 0x738dd50
// body: available
// range: 0x738dd50-0x738de17 inclusive
// range: 0x738de1c-0x738df47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738de14 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738df14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738df44 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint MessagePack_MessagePackReader__<TryReadExtensionFormatHeader>g__SlowPath_48_0
               (undefined8 param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_09520ab2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9fa8);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_09520ab2 = 1;
  }
  if (param_2 - 2U < 2) {
    iVar1 = *param_4;
    if (iVar1 == 0) {
      memset((void *)0x0,0,0);
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar7 = auStack_60 + -((long)iVar1 + 0xfU & 0xfffffffffffffff0);
      memset(puVar7,0,(long)iVar1);
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
    }
    uVar5 = FUN_04d4efec(param_1,puVar7,iVar1,DAT_091b9fa8);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
      *param_3 = 0;
    }
    else {
      auVar8 = FUN_06108530(puVar7,iVar1,DAT_091ba930);
      uVar3 = MessagePack_MessagePackPrimitives__TryReadExtensionHeader
                        (auVar8._0_8_,auVar8._8_8_,param_3,param_4);
      uVar4 = MessagePack_MessagePackReader__<TryReadExtensionFormatHeader>g__SlowPath_48_0
                        (param_1,uVar3,param_3,param_4);
    }
  }
  else {
    if (param_2 != 0) {
      if (param_2 == 1) {
        uVar6 = thunk_FUN_03fc39d4(&DAT_091b9ff8);
        auVar9 = FUN_03eaad80(param_1,uVar6);
        puVar7 = auVar9._0_8_;
        if (auVar9._8_4_ == 0) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_0738df44;
        }
      }
      else {
        if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0738df44;
        puVar7 = (undefined1 *)MessagePack_MessagePackReader__ThrowUnreachable();
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        MessagePack_MessagePackReader__ThrowInvalidCode(*puVar7);
      }
      goto LAB_0738df44;
    }
    FUN_042658c0(param_1,(long)*param_4,DAT_091b9f90);
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4 & 1;
  }
LAB_0738df44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

