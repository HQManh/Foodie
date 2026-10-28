// rea decompile_all
// name: FUN_03f98f5c
// address: 0x3f98f5c
// body: available
// range: 0x3f98f5c-0x3f98ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f98f5c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_3 + 4);
  *param_1 = *param_2;
  if (iVar1 == 2) {
    uVar2 = *(undefined4 *)((long)param_2 + 10);
    uVar3 = (uint)*(ushort *)(param_2 + 1);
    if (uVar3 == 0xffff) {
      uVar3 = 0xffffffff;
    }
    uVar5 = (uint)*(ushort *)((long)param_2 + 0xe);
    *(uint *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    puVar4 = param_2 + 2;
    if (uVar5 == 0xffff) {
      uVar5 = 0xffffffff;
    }
  }
  else if (iVar1 == 1) {
    uVar2 = *(undefined4 *)((long)param_2 + 9);
    uVar3 = (uint)*(byte *)(param_2 + 1);
    if (uVar3 == 0xff) {
      uVar3 = 0xffffffff;
    }
    uVar5 = (uint)*(byte *)((long)param_2 + 0xd);
    *(uint *)(param_1 + 1) = uVar3;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    puVar4 = (undefined8 *)((long)param_2 + 0xe);
    if (uVar5 == 0xff) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = *(uint *)(param_2 + 2);
    puVar4 = (undefined8 *)((long)param_2 + 0x14);
    param_1[1] = param_2[1];
  }
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  uVar2 = *(undefined4 *)(puVar4 + 2);
  *(uint *)(param_1 + 2) = uVar5;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x14) = uVar6;
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}

