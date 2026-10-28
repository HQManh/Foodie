// rea decompile_all
// name: thunk_FUN_03f66e40
// address: 0x74eceac
// body: available
// range: 0x74eceac-0x74eceaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03f66e40(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong **ppuVar8;
  ulong *puVar9;
  ulong uStack_c0;
  void *pvStack_b8;
  void *pvStack_b0;
  ulong uStack_a8;
  ulong **appuStack_a0 [2];
  void *pvStack_90;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong **ppuStack_68;
  ulong uStack_60;
  void *pvStack_58;
  void *pvStack_50;
  ulong uStack_48;
  
  FUN_03f66c8c(&puStack_80);
  puVar2 = puStack_78;
  FUN_03f926e8(&ppuStack_68,param_2 + 0x14);
  ppuVar8 = ppuStack_68;
  pvVar3 = pvStack_58;
  puVar1 = puStack_80;
  if (((ulong)ppuStack_68 & 1) != 0) {
    FUN_03f5d0a4(appuStack_a0,pvStack_58,uStack_60);
    ppuVar8 = appuStack_a0[0];
    pvVar3 = pvStack_90;
  }
  while ((pvStack_90 = pvVar3, appuStack_a0[0] = ppuVar8, puVar9 = puStack_80, puVar1 != puVar2 &&
         (uVar4 = FUN_03f67d24(appuStack_a0,puVar1), puVar9 = puVar1, (uVar4 & 1) == 0))) {
    ppuVar8 = appuStack_a0[0];
    pvVar3 = pvStack_90;
    puVar1 = puVar1 + 5;
    puStack_80 = puVar2;
  }
  if (((ulong)appuStack_a0[0] & 1) != 0) {
    operator_delete(pvStack_90);
  }
  if (((ulong)ppuStack_68 & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if (puVar9 == puStack_78) {
    lVar6 = 0;
    goto LAB_03f67024;
  }
  uVar5 = FUN_03f9b184(**(undefined8 **)(param_1 + 0x10));
  *param_4 = uVar5;
  *param_3 = *(undefined4 *)((long)puVar9 + 0x24);
  ppuVar8 = (ulong **)*puVar9;
  if ((puVar9[1] & 1) == 0) {
    pvStack_b0 = (void *)puVar9[3];
    pvStack_b8 = (void *)puVar9[2];
    uStack_c0 = puVar9[1];
  }
  else {
    FUN_03f5d0a4(&uStack_c0,puVar9[3],puVar9[2]);
  }
  uVar5 = DAT_09534488;
  uStack_a8 = puVar9[4];
  FUN_03f87eb4(DAT_09534488,0);
  lVar6 = FUN_03fb59a0(ppuVar8,&uStack_c0);
  if (lVar6 == 0) {
    lVar7 = FUN_03fb567c(param_1);
    if (lVar7 == 0) {
      lVar7 = FUN_03f67598(param_1);
      lVar6 = 0;
      if (lVar7 == 0) goto LAB_03f6700c;
      FUN_03fb5608(param_1,lVar7);
    }
    uVar4 = uStack_a8 & 0xffffffff;
    ppuStack_68 = ppuVar8;
    if ((uStack_c0 & 1) == 0) {
      pvStack_58 = pvStack_b8;
      uStack_60 = uStack_c0;
      pvStack_50 = pvStack_b0;
    }
    else {
      FUN_03f5d0a4(&uStack_60,pvStack_b0,pvStack_b8);
    }
    lVar6 = lVar7 + uVar4;
    uStack_48 = uStack_a8;
    FUN_03fb5718(&ppuStack_68,lVar6);
    if ((uStack_60 & 1) != 0) {
      operator_delete(pvStack_50);
    }
  }
LAB_03f6700c:
  FUN_03f87f40(uVar5);
  if ((uStack_c0 & 1) != 0) {
    operator_delete(pvStack_b0);
  }
LAB_03f67024:
  ppuStack_68 = &puStack_80;
  FUN_03f67cac(&ppuStack_68);
  return lVar6;
}

