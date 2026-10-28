// rea decompile_all
// name: FUN_03fdc540
// address: 0x3fdc540
// body: available
// range: 0x3fdc540-0x3fdc6ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fdc540(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  
  while ((*(int *)((long)param_1 + 0xb4) != 0 ||
         (FUN_03fdb190(param_1), *(int *)((long)param_1 + 0xb4) != 0))) {
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    *(undefined4 *)(param_1 + 0x14) = 0;
    bVar5 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(undefined1 *)(param_1[0x2e0] + (ulong)uVar1) = 0;
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(undefined1 *)(param_1[0x2e0] + (ulong)uVar1) = 0;
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(byte *)(param_1[0x2e0] + (ulong)uVar1) = bVar5;
    iVar2 = *(int *)((long)param_1 + 0x170c);
    iVar3 = *(int *)((long)param_1 + 0xb4);
    lVar6 = param_1[0x2e2];
    iVar4 = *(int *)((long)param_1 + 0xac);
    *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0xd4) =
         *(short *)((long)param_1 + (ulong)bVar5 * 4 + 0xd4) + 1;
    uVar1 = iVar4 + 1;
    *(int *)((long)param_1 + 0xb4) = iVar3 + -1;
    *(uint *)((long)param_1 + 0xac) = uVar1;
    if (iVar2 == (int)lVar6) {
      uVar7 = param_1[0x13];
      if ((long)uVar7 < 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_1[0xc] + (uVar7 & 0xffffffff);
      }
      FUN_03fddcf4(param_1,lVar6,uVar1 - uVar7,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      FUN_03fdbffc(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)((long)param_1 + 0x172c) = 0;
  if (param_2 != 4) {
    if (*(int *)((long)param_1 + 0x170c) != 0) {
      uVar7 = param_1[0x13];
      if ((long)uVar7 < 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_1[0xc] + (uVar7 & 0xffffffff);
      }
      FUN_03fddcf4(param_1,lVar6,*(uint *)((long)param_1 + 0xac) - uVar7,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      FUN_03fdbffc(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
    return 1;
  }
  uVar7 = param_1[0x13];
  if ((long)uVar7 < 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1[0xc] + (uVar7 & 0xffffffff);
  }
  FUN_03fddcf4(param_1,lVar6,*(uint *)((long)param_1 + 0xac) - uVar7,1);
  param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
  FUN_03fdbffc(*param_1);
  if (*(int *)(*param_1 + 0x20) != 0) {
    return 3;
  }
  return 2;
}

