// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$ToBigInteger
// address: 0x76889d4
// body: available
// range: 0x76889d4-0x7688cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7688cc0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Newtonsoft_Json_Utilities_ConvertUtils__ToBigInteger(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09522564 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_09522564 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar14 = *param_1;
    if (lVar14 == DAT_09181b78) {
      pauVar8 = (undefined1 (*) [16])thunk_FUN_03f99594(param_1);
      return *pauVar8;
    }
    if (lVar14 == DAT_09535468) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09181b78 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181b78);
      }
      auVar15 = System_Numerics_BigInteger__Parse(param_1,uVar11,0);
      return auVar15;
    }
    if (lVar14 == DAT_09535450) {
      puVar9 = (undefined4 *)thunk_FUN_03f99594(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(*puVar9,&local_30,0);
      auVar15._8_8_ = uStack_28;
      auVar15._0_8_ = local_30;
      return auVar15;
    }
    if (lVar14 == DAT_09535458) {
      puVar10 = (undefined8 *)thunk_FUN_03f99594(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(*puVar10,&local_30,0);
      auVar7._8_8_ = uStack_28;
      auVar7._0_8_ = local_30;
      return auVar7;
    }
    if (lVar14 == DAT_091837d8) {
      puVar10 = (undefined8 *)FUN_039aef84(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(&local_30,*puVar10,puVar10[1],0);
      auVar6._8_8_ = uStack_28;
      auVar6._0_8_ = local_30;
      return auVar6;
    }
    if (lVar14 == DAT_09535420) {
      puVar9 = (undefined4 *)FUN_039aef84(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(&local_30,*puVar9,0);
      auVar5._8_8_ = uStack_28;
      auVar5._0_8_ = local_30;
      return auVar5;
    }
    if (lVar14 == DAT_09535440) {
      puVar10 = (undefined8 *)FUN_039aef84(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(&local_30,*puVar10,0);
      auVar4._8_8_ = uStack_28;
      auVar4._0_8_ = local_30;
      return auVar4;
    }
    if (lVar14 == DAT_09535428) {
      puVar9 = (undefined4 *)FUN_039aef84(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(&local_30,*puVar9,0);
      auVar3._8_8_ = uStack_28;
      auVar3._0_8_ = local_30;
      return auVar3;
    }
    if (lVar14 == DAT_09535448) {
      puVar10 = (undefined8 *)FUN_039aef84(param_1);
      local_30 = 0;
      uStack_28 = 0;
      System_Numerics_BigInteger___ctor(&local_30,*puVar10,0);
      auVar2._8_8_ = uStack_28;
      auVar2._0_8_ = local_30;
      return auVar2;
    }
  }
  lVar14 = thunk_FUN_03f99350(param_1,DAT_0917fc88);
  if (lVar14 != 0) {
    local_30 = 0;
    uStack_28 = 0;
    System_Numerics_BigInteger___ctor(&local_30,lVar14,0);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  FUN_039b1d98(param_1);
  uVar12 = System_Object__GetType(param_1,0);
  uVar13 = thunk_FUN_03fc39d4(&DAT_091fdba0);
  uVar11 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar13,uVar11,uVar12,0);
  thunk_FUN_03fc39d4(&DAT_09187090);
  uVar12 = thunk_FUN_03f9944c();
  System_InvalidCastException___ctor(uVar12,uVar11,0);
  uVar11 = thunk_FUN_03fc39d4(&DAT_091c6240);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar11);
}

