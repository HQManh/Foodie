// rea decompile_all
// name: System.Number$$ParseInt64
// address: 0x75b4738
// body: available
// range: 0x75b4738-0x75b494f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b494c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__ParseInt64
               (undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong local_108;
  char local_fc;
  ulong local_f8;
  char local_ec [4];
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 local_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar4 = (ulong *)(param_3 & 0xffffffff);
  if ((DAT_09521d61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_09212d58);
    DAT_09521d61 = 1;
  }
  local_e8 = 0;
  local_ec[0] = '\0';
  uStack_6e = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  local_76 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_f8 = 0;
  local_fc = '\0';
  local_108 = 0;
  if ((uint)param_3 < 8) {
    local_ec[0] = '\0';
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Number__TryParseInt64IntegerStyle
                      (param_1,param_2,puVar4,param_4,&local_f8,local_ec);
    puVar4 = &local_f8;
    cVar2 = local_ec[0];
joined_r0x075b48dc:
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = (ulong)(cVar2 != '\0');
      if (*(long *)(lVar1 + 0x28) == local_58) {
        uVar3 = System_Number__ThrowOverflowOrFormatException(uVar3,DAT_09212d58);
      }
      goto LAB_075b494c;
    }
  }
  else {
    if (((uint)param_3 >> 9 & 1) != 0) {
LAB_075b48ac:
      local_fc = '\0';
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Number__TryParseUInt64HexNumberStyle
                        (param_1,param_2,(ulong)puVar4 & 0xffffffff);
      puVar4 = &local_108;
      cVar2 = local_fc;
      goto joined_r0x075b48dc;
    }
    uStack_6e = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    local_76 = 0;
    uStack_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    local_e8 = 0;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Number__StringToNumber(param_1,param_2,param_3 & 0xffffffff,&local_e0,param_4,0);
    puVar4 = &local_e8;
    uVar3 = System_Number__NumberToInt64(&local_e0,&local_e8);
    if ((uVar3 & 1) == 0) {
      uVar3 = DAT_09188a70;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        uVar3 = FUN_03f5c424();
      }
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_075b494c;
      System_Number__ThrowOverflowOrFormatException(1,DAT_09212d58);
      goto LAB_075b48ac;
    }
  }
  uVar3 = *puVar4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_075b494c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

