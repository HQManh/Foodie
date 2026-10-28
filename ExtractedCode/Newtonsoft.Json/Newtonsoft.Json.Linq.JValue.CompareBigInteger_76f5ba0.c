// rea decompile_all
// name: Newtonsoft.Json.Linq.JValue$$CompareBigInteger
// address: 0x76f5ba0
// body: available
// range: 0x76f5ba0-0x76f5e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f5e84 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JValue__CompareBigInteger
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_80 = param_1;
  uStack_78 = param_2;
  if ((DAT_095228e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095228e2 = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  local_88 = 0;
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar8 = Newtonsoft_Json_Utilities_ConvertUtils__ToBigInteger(param_3,0);
  if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Numerics_BigInteger__CompareTo(&local_80,auVar8._0_8_,auVar8._8_8_,0);
  auVar8._8_8_ = local_58._8_8_;
  auVar8._0_8_ = local_58._0_8_;
  if ((int)uVar3 != 0) goto LAB_076f5e5c;
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    if (lVar5 == DAT_091837d8) {
      puVar4 = (undefined8 *)thunk_FUN_03f99594(param_3);
      uVar3 = *puVar4;
      uVar1 = puVar4[1];
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_68 = (*(undefined8 **)(DAT_091837d8 + 0xb8))[1];
      local_70 = **(undefined8 **)(DAT_091837d8 + 0xb8);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0952297d == '\0') {
        FUN_03f5c2a4(&DAT_091837d8);
        DAT_0952297d = '\x01';
      }
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar8 = System_Decimal__Truncate(uVar3,uVar1,0);
      local_58 = System_Decimal__op_Subtraction(uVar3,uVar1,auVar8._0_8_,auVar8._8_8_,0);
      if (DAT_0952297e == '\0') {
        FUN_03f5c2a4(&DAT_091837d8);
        DAT_0952297e = '\x01';
      }
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar8 = System_Decimal__Abs(local_58,0);
      uVar3 = System_Decimal__CompareTo(&local_70,auVar8._0_8_,auVar8._8_8_,0);
      goto LAB_076f5e5c;
    }
    if ((lVar5 == DAT_09535458) || (lVar5 == DAT_09535450)) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      dVar6 = (double)System_Convert__ToDouble(param_3,uVar3,0);
      local_88 = 0;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar7 = (double)System_Math__Truncate(dVar6,0);
      uVar3 = System_Double__CompareTo(ABS(dVar6 - dVar7),&local_88,0);
      goto LAB_076f5e5c;
    }
  }
  uVar3 = 0;
  local_58 = auVar8;
LAB_076f5e5c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

