// rea decompile_all
// name: FUN_03faaf40
// address: 0x3faaf40
// body: available
// range: 0x3faaf40-0x3fab053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03faaf40(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  int local_90 [3];
  undefined1 auStack_84 [28];
  int local_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x80);
  uVar3 = FUN_03fb8274(lVar6 + 0x20);
  if ((uVar3 & 1) != 0) {
    lVar6 = FUN_03fb4784(*(undefined8 *)(lVar6 + 0x60));
  }
  FUN_03f98df4(auStack_84,*(undefined8 *)(lVar6 + 0x68),&DAT_0953522c);
  local_90[0] = local_68 + (int)((ulong)(param_1 - lVar7) >> 5);
  iVar1 = *(int *)(DAT_09535220 + 100);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_09535220 + 0x60) / iVar1;
  }
  pvVar4 = bsearch(local_90,(void *)(DAT_09535218 + *(int *)(DAT_09535220 + 0x5c)),(long)iVar1,
                   (long)iVar2,FUN_03faff88);
  lVar6 = 0;
  if (pvVar4 != (void *)0x0) {
    auVar8 = FUN_03f98d10(pvVar4,&DAT_0953522c);
    if (auVar8._0_8_ < 0xffffffff00000000) {
      uVar5 = *(undefined8 *)(*(long *)(DAT_09535208 + 0x38) + ((long)auVar8._0_8_ >> 0x20) * 8);
    }
    else {
      uVar5 = 0;
    }
    uVar3 = auVar8._8_8_ & 0xffffffff;
    *param_2 = uVar5;
    if (uVar3 == 0xffffffff) {
      lVar6 = 0;
    }
    else {
      lVar6 = DAT_09535218 + *(int *)(DAT_09535220 + 0x68) + uVar3;
    }
  }
  return lVar6;
}

