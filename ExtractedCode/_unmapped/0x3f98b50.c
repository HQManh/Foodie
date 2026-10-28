// rea decompile_all
// name: FUN_03f98b50
// address: 0x3f98b50
// body: available
// range: 0x3f98b50-0x3f98c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f98b50(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = param_3[1];
  *param_1 = *param_2;
  if (iVar1 == 2) {
    uVar6 = (uint)*(ushort *)(param_2 + 1);
    bVar3 = *(ushort *)(param_2 + 1) == 0xffff;
    puVar5 = (uint *)((long)param_2 + 6);
LAB_03f98b8c:
    if (bVar3) {
      uVar6 = 0xffffffff;
    }
  }
  else {
    if (iVar1 == 1) {
      uVar6 = (uint)*(byte *)(param_2 + 1);
      puVar5 = (uint *)((long)param_2 + 5);
      bVar3 = *(byte *)(param_2 + 1) == 0xff;
      goto LAB_03f98b8c;
    }
    uVar6 = param_2[1];
    puVar5 = param_2 + 2;
  }
  iVar1 = *param_3;
  param_1[1] = uVar6;
  if (iVar1 == 2) {
    puVar4 = (uint *)((long)puVar5 + 2);
    uVar6 = (uint)(ushort)*puVar5;
    bVar3 = (ushort)*puVar5 == 0xffff;
LAB_03f98bcc:
    if (bVar3) {
      uVar6 = 0xffffffff;
    }
  }
  else {
    if (iVar1 == 1) {
      puVar4 = (uint *)((long)puVar5 + 1);
      uVar6 = (uint)(byte)*puVar5;
      bVar3 = (byte)*puVar5 == 0xff;
      goto LAB_03f98bcc;
    }
    puVar4 = puVar5 + 1;
    uVar6 = *puVar5;
  }
  iVar1 = param_3[3];
  uVar2 = *puVar4;
  param_1[2] = uVar6;
  param_1[3] = uVar2;
  if (iVar1 == 2) {
    uVar6 = (uint)(ushort)puVar4[1];
    puVar5 = (uint *)((long)puVar4 + 6);
    bVar3 = (ushort)puVar4[1] == 0xffff;
LAB_03f98c14:
    if (bVar3) {
      uVar6 = 0xffffffff;
    }
  }
  else {
    if (iVar1 == 1) {
      uVar6 = (uint)(byte)puVar4[1];
      puVar5 = (uint *)((long)puVar4 + 5);
      bVar3 = (byte)puVar4[1] == 0xff;
      goto LAB_03f98c14;
    }
    uVar6 = puVar4[1];
    puVar5 = puVar4 + 2;
  }
  iVar1 = param_3[2];
  param_1[4] = uVar6;
  if (iVar1 == 2) {
    puVar4 = (uint *)((long)puVar5 + 2);
    uVar6 = (uint)(ushort)*puVar5;
    bVar3 = (ushort)*puVar5 == 0xffff;
  }
  else {
    if (iVar1 != 1) {
      puVar4 = puVar5 + 1;
      uVar6 = *puVar5;
      goto LAB_03f98c60;
    }
    puVar4 = (uint *)((long)puVar5 + 1);
    uVar6 = (uint)(byte)*puVar5;
    bVar3 = (byte)*puVar5 == 0xff;
  }
  if (bVar3) {
    uVar6 = 0xffffffff;
  }
LAB_03f98c60:
  param_1[5] = uVar6;
  param_1[6] = *puVar4;
  *(ushort *)(param_1 + 7) = (ushort)puVar4[1];
  *(ushort *)((long)param_1 + 0x1e) = *(ushort *)((long)puVar4 + 6);
  *(ushort *)(param_1 + 8) = (ushort)puVar4[2];
  *(ushort *)((long)param_1 + 0x22) = *(ushort *)((long)puVar4 + 10);
  return;
}

