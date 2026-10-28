// rea decompile_all
// name: Microsoft.NET.StringTools.InternableString$$GetHashCode
// address: 0x73ed574
// body: available
// range: 0x73ed574-0x73ed787 inclusive
// range: 0x73ed7b8-0x73ed7f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ed7f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Microsoft_NET_StringTools_InternableString__GetHashCode(long param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  long local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_09520df7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1ea0);
    FUN_03f5c2a4(&DAT_091a1ea8);
    FUN_03f5c2a4(&DAT_091a1eb0);
    FUN_03f5c2a4(&DAT_091aa8d8);
    FUN_03f5c2a4(&DAT_091b9688);
    FUN_03f5c2a4(&DAT_091b9690);
    FUN_03f5c2a4(&DAT_091b97d8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09520df7 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  uVar8 = 0x15051505;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  puVar5 = (uint *)FUN_05ff6af0(param_1,DAT_091b97d8);
  uVar4 = *(uint *)(param_1 + 8);
  puVar9 = puVar5;
  uVar7 = uVar4;
  if (1 < (int)uVar4) {
    do {
      puVar5 = puVar9 + 1;
      uVar4 = uVar7 - 2;
      uVar8 = *puVar9 ^ (uVar8 >> 0x1b | uVar8 << 5) + uVar8;
      bVar3 = 3 < uVar7;
      puVar9 = puVar5;
      uVar7 = uVar4;
    } while (bVar3);
  }
  bVar3 = uVar4 == 1;
  if (bVar3) {
    uVar8 = (uVar8 >> 0x1b | uVar8 << 5) + uVar8 ^ (uint)(ushort)*puVar5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_05699124(&local_b0,*(long *)(param_1 + 0x18),DAT_091aa8d8);
    local_70 = local_b0;
    local_b0 = 0;
    uStack_68 = plStack_a8;
    uStack_58 = uStack_98;
    local_60 = uStack_a0;
    plStack_a8 = &local_70;
    while( true ) {
      uVar6 = FUN_0718425c(&local_70,DAT_091a1ea8);
      lVar2 = local_b0;
      if ((uVar6 & 1) == 0) break;
      uStack_78 = uStack_58;
      local_80 = local_60;
      auVar10 = FUN_04a6d894(&local_80,DAT_091b9690);
      local_90 = auVar10;
      puVar5 = (uint *)FUN_05ff6af0(local_90,DAT_091b97d8);
      uVar4 = FUN_05fd73e4(&local_80,DAT_091b9688);
      puVar9 = puVar5;
      if ((bVar3) && (0 < (int)uVar4)) {
        puVar9 = (uint *)((long)puVar5 + 2);
        bVar3 = false;
        uVar8 = uVar8 ^ (uint)(ushort)*puVar5 << 0x10;
        uVar4 = uVar4 - 1;
      }
      puVar5 = puVar9;
      uVar7 = uVar4;
      if (1 < (int)uVar4) {
        do {
          puVar9 = puVar5 + 1;
          uVar4 = uVar7 - 2;
          uVar8 = *puVar5 ^ (uVar8 >> 0x1b | uVar8 << 5) + uVar8;
          bVar1 = 3 < uVar7;
          puVar5 = puVar9;
          uVar7 = uVar4;
        } while (bVar1);
      }
      if (uVar4 == 1) {
        bVar3 = true;
        uVar8 = (uVar8 >> 0x1b | uVar8 << 5) + uVar8 ^ (uint)(ushort)*puVar9;
      }
    }
    FUN_07184258(plStack_a8,DAT_091a1ea0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar2);
    }
  }
  return uVar8;
}

