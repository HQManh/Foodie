// rea decompile_all
// name: MessagePack.Formatters.DecimalFormatter$$Serialize
// address: 0x73e6320
// body: available
// range: 0x73e6320-0x73e6537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e63d4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e651c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6530 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e6534 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_DecimalFormatter__Serialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_3;
  uStack_50 = param_4;
  if ((DAT_09520db8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091c8168);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091ba918);
    FUN_03f5c2a4(&DAT_0918c970);
    DAT_09520db8 = 1;
  }
  local_5c = 0;
  auVar4 = MessagePack_MessagePackWriter__GetSpan(param_2,0x20,0);
  if (auVar4._8_4_ < 0x20) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091ba918 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  if (*(int *)(DAT_0918c970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Buffers_Text_Utf8Formatter__TryFormat
                    (param_3,param_4,auVar4._0_8_ + 1,0x1f,&local_5c,0,0);
  if ((uVar2 & 1) == 0) {
    MessagePack_MessagePackWriter__Advance(param_2,0,0);
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091837d8);
    }
    uVar3 = System_Decimal__ToString(&local_58,uVar3,0);
    FUN_0642dfb8(param_2,uVar3,0);
  }
  else {
    if (auVar4._8_4_ == 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_073e6534;
    }
    if ((0xff < (int)(local_5c | 0xa0)) ||
       (*auVar4._0_8_ = (char)(local_5c | 0xa0), local_5c == 0x7fffffff)) {
      uVar3 = FUN_03f5c560();
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,DAT_091c8168);
      }
      goto LAB_073e6534;
    }
    MessagePack_MessagePackWriter__Advance(param_2,local_5c + 1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_073e6534:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

