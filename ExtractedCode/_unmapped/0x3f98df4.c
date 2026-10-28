// rea decompile_all
// name: FUN_03f98df4
// address: 0x3f98df4
// body: available
// range: 0x3f98df4-0x3f98f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f98df4(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *param_3;
  *param_1 = *param_2;
  if (iVar1 == 2) {
    uVar3 = (uint)*(ushort *)(param_2 + 1);
    if (uVar3 == 0xffff) {
      uVar3 = 0xffffffff;
    }
    uVar6 = (uint)*(ushort *)((long)param_2 + 10);
    if (uVar6 == 0xffff) {
      uVar6 = 0xffffffff;
    }
    uVar7 = (uint)*(ushort *)((long)param_2 + 0xc);
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar6;
    puVar4 = (uint *)((long)param_2 + 0xe);
    if (uVar7 == 0xffff) {
      uVar7 = 0xffffffff;
    }
  }
  else if (iVar1 == 1) {
    uVar3 = (uint)*(byte *)(param_2 + 1);
    if (uVar3 == 0xff) {
      uVar3 = 0xffffffff;
    }
    uVar6 = (uint)*(byte *)((long)param_2 + 9);
    if (uVar6 == 0xff) {
      uVar6 = 0xffffffff;
    }
    uVar7 = (uint)*(byte *)((long)param_2 + 10);
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar6;
    puVar4 = (uint *)((long)param_2 + 0xb);
    if (uVar7 == 0xff) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    uVar7 = *(uint *)(param_2 + 2);
    puVar4 = (uint *)((long)param_2 + 0x14);
    param_1[1] = param_2[1];
  }
  iVar1 = param_3[2];
  *(uint *)(param_1 + 2) = uVar7;
  if (iVar1 == 2) {
    puVar5 = (uint *)((long)puVar4 + 2);
    uVar3 = (uint)(ushort)*puVar4;
    bVar2 = (ushort)*puVar4 == 0xffff;
  }
  else {
    if (iVar1 != 1) {
      puVar5 = puVar4 + 1;
      uVar3 = *puVar4;
      goto LAB_03f98ec0;
    }
    puVar5 = (uint *)((long)puVar4 + 1);
    uVar3 = (uint)(byte)*puVar4;
    bVar2 = (byte)*puVar4 == 0xff;
  }
  if (bVar2) {
    uVar3 = 0xffffffff;
  }
LAB_03f98ec0:
  uVar6 = *puVar5;
  *(uint *)((long)param_1 + 0x14) = uVar3;
  *(uint *)(param_1 + 3) = uVar6;
  *(uint *)((long)param_1 + 0x1c) = puVar5[1];
  *(uint *)(param_1 + 4) = puVar5[2];
  *(uint *)((long)param_1 + 0x24) = puVar5[3];
  *(uint *)(param_1 + 5) = puVar5[4];
  *(uint *)((long)param_1 + 0x2c) = puVar5[5];
  *(uint *)(param_1 + 6) = puVar5[6];
  *(uint *)((long)param_1 + 0x34) = puVar5[7];
  *(uint *)(param_1 + 7) = puVar5[8];
  *(ushort *)((long)param_1 + 0x3c) = (ushort)puVar5[9];
  *(ushort *)((long)param_1 + 0x3e) = *(ushort *)((long)puVar5 + 0x26);
  *(ushort *)(param_1 + 8) = (ushort)puVar5[10];
  *(ushort *)((long)param_1 + 0x42) = *(ushort *)((long)puVar5 + 0x2a);
  *(ushort *)((long)param_1 + 0x44) = (ushort)puVar5[0xb];
  *(ushort *)((long)param_1 + 0x46) = *(ushort *)((long)puVar5 + 0x2e);
  *(ushort *)(param_1 + 9) = (ushort)puVar5[0xc];
  *(ushort *)((long)param_1 + 0x4a) = *(ushort *)((long)puVar5 + 0x32);
  *(uint *)((long)param_1 + 0x4c) = puVar5[0xd];
  *(uint *)(param_1 + 10) = puVar5[0xe];
  return;
}

