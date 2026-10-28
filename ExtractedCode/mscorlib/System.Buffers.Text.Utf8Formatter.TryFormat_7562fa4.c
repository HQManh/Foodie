// rea decompile_all
// name: System.Buffers.Text.Utf8Formatter$$TryFormat
// address: 0x7562fa4
// body: available
// range: 0x7562fa4-0x75632d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75631cc to 0x75d7c44 System.ThrowHelper$$TryFormatThrowFormatException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75632d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Buffers_Text_Utf8Formatter__TryFormat
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint5 local_90;
  char cStack_8b;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095219c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a78);
    FUN_03f5c2a4(&DAT_0918c970);
    DAT_095219c8 = 1;
  }
  uVar6 = (uint)param_6;
  local_60 = 0;
  uVar2 = (uVar6 & 0xff) - 0x45;
  uVar5 = (ulong)uVar2;
  local_a0 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  _local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  if (uVar2 < 0x23) {
    uVar2 = (uint)(param_6 >> 8);
    if ((1L << (uVar5 & 0x3f) & 0x100000001U) != 0) {
      local_e0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      if (*(int *)(DAT_09188a78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Buffers_Text_Number__DecimalToNumber(param_1,param_2,&local_110);
      uVar6 = 6;
      if (((uVar2 ^ 0xffffffff) & 0xff) != 0) {
        uVar6 = uVar2;
      }
      if (*(int *)(DAT_09188a78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Buffers_Text_Number__RoundNumber(&local_110,(uVar6 & 0xff) + 1);
      if (*(int *)(DAT_0918c970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Buffers_Text_Utf8Formatter__TryFormatDecimalE
                        (&local_110,param_3,param_4,param_5,uVar6,param_6 & 0xffffffff);
      goto LAB_0756326c;
    }
    if ((1L << (uVar5 & 0x3f) & 0x200000002U) != 0) {
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      if (*(int *)(DAT_09188a78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Buffers_Text_Number__DecimalToNumber(param_1,param_2,&local_d0);
      iVar1 = (int)local_d0;
      uVar6 = 2;
      if (((uVar2 ^ 0xffffffff) & 0xff) != 0) {
        uVar6 = uVar2;
      }
      if (*(int *)(DAT_09188a78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Buffers_Text_Number__RoundNumber(&local_d0,iVar1 + (uVar6 & 0xff));
      if (*(int *)(DAT_0918c970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Buffers_Text_Utf8Formatter__TryFormatDecimalF
                        (&local_d0,param_3,param_4,param_5,uVar6);
      goto LAB_0756326c;
    }
    if ((1L << (uVar5 & 0x3f) & 0x400000004U) == 0) goto LAB_075631a0;
    if (((uVar6 >> 8 ^ 0xffffffff) & 0xff) != 0) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920eae0);
      System_NotSupportedException___ctor(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091de840);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
  }
  else {
LAB_075631a0:
    if (((param_6 & 0xff) != 0) || ((uVar6 >> 8 & 0xff) != 0)) {
      uVar5 = System_ThrowHelper__TryFormatThrowFormatException(param_5,0);
      return uVar5;
    }
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  _local_90 = 0;
  if (*(int *)(DAT_09188a78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Buffers_Text_Number__DecimalToNumber(param_1,param_2,&local_90);
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  if (cStack_8b == '\0') {
    local_90 = (uint5)(uint)local_90;
  }
  if (*(int *)(DAT_0918c970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Buffers_Text_Utf8Formatter__TryFormatDecimalG(&local_90,param_3,param_4,param_5);
LAB_0756326c:
  return (ulong)(uVar2 & 1);
}

