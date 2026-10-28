// rea decompile_all
// name: FUN_03fbe828
// address: 0x3fbe828
// body: available
// range: 0x3fbe828-0x3fbe9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fbe828(undefined8 param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  FUN_03f5d894(auStack_38,&DAT_09535730);
  local_50 = 0;
  local_48 = param_1;
  FUN_03fa4e1c(&local_b8,&DAT_09535840,&local_50);
  lVar5 = local_98;
  lVar4 = local_a0;
  lVar3 = local_a8;
  lVar2 = local_b0;
  local_78 = 0;
  local_b8 = &DAT_09535840;
  local_b0 = DAT_09535880;
  local_a8 = DAT_09535888;
  local_a0 = DAT_09535888;
  local_98 = 0;
  lStack_90 = DAT_09535880;
  local_88 = DAT_09535888;
  lStack_80 = DAT_09535888;
  FUN_03f6054c(&local_b8);
  if ((((lVar2 == local_b0) && (lVar3 == local_a8)) && (lVar4 == local_a0)) &&
     ((lVar4 == lVar3 || (lVar5 == local_98)))) {
    puVar8 = (undefined8 *)FUN_03fa7f34(1,0x138);
    puVar8[0xf] = puVar8;
    FUN_03faca28(&local_50,param_1);
    puVar8[2] = local_48;
    puVar8[3] = &DAT_01a45042;
    puVar6 = (undefined8 *)FUN_03fb4c8c(CONCAT44(uStack_4c,local_50));
    uVar7 = *puVar6;
    puVar8[8] = puVar8;
    puVar8[9] = puVar8;
    *puVar8 = uVar7;
    uVar7 = DAT_095353e8;
    *(undefined4 *)(puVar8 + 0x23) = 1;
    puVar8[0xb] = uVar7;
    FUN_03fac9c4(CONCAT44(uStack_4c,local_50));
    FUN_03fac9a4(CONCAT44(uStack_4c,local_50),param_1,puVar8 + 4);
    FUN_03fac9a4(CONCAT44(uStack_4c,local_50),param_1,puVar8 + 6);
    puVar1 = (ushort *)((long)puVar8 + 0x135);
    *(undefined4 *)(puVar8 + 0x22) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x21) = 0xffffffff;
    *(uint *)(puVar8 + 7) = *(uint *)(puVar8 + 7) | 0x20000000;
    puVar8[0x1f] = 0x800000008;
    *puVar1 = *puVar1 | 0x100;
    *(undefined1 *)(puVar8 + 0x26) = 1;
    DataMemoryBarrier(2,3);
    local_68[0] = 0;
    *puVar1 = *puVar1 & 0xffbe | 2 | (ushort)(puVar8[0x1b] == 0);
    local_60 = param_1;
    puStack_58 = puVar8;
    FUN_03fc4ab0(&DAT_09535840,1);
    FUN_03f5f178(&local_b8,&DAT_09535840,local_68);
  }
  else {
    puVar8 = *(undefined8 **)(lVar5 + 0x10);
  }
  FUN_03f5d920(auStack_38);
  return puVar8;
}

