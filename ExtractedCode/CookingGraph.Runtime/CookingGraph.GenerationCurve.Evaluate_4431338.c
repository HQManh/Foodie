// rea decompile_all
// name: CookingGraph.GenerationCurve$$Evaluate
// address: 0x4431338
// body: available
// range: 0x4431338-0x443162f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CookingGraph_GenerationCurve__Evaluate(float param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09517fc2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca008);
    FUN_03f5c2a4(&DAT_091cb188);
    FUN_03f5c2a4(&DAT_091cb498);
    FUN_03f5c2a4(&DAT_09178950);
    FUN_03f5c2a4(&DAT_09178948);
    FUN_03f5c2a4(&DAT_09184bc0);
    FUN_03f5c2a4(&DAT_091acd98);
    FUN_03f5c2a4(&DAT_0917c1f8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ea4a0);
    FUN_03f5c2a4(&DAT_091ea4a8);
    FUN_03f5c2a4(&DAT_09190d28);
    DAT_09517fc2 = 1;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_09184bc0);
    uVar7 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(lVar3 + 0x1c) = 0x40a00000;
    *(undefined8 *)(lVar3 + 0x14) = uVar7;
    System_Object___ctor(lVar3,0);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917c1f8);
    FUN_057e0400(lVar4,DAT_091acd98);
  }
  if (*(int *)(DAT_09190d28 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09190d28 + 0xb8);
  lVar5 = puVar2[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_09190d28 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_09190d28 + 0xb8);
    }
    uVar7 = *puVar2;
    lVar5 = thunk_FUN_03f9944c(DAT_09178948);
    FUN_05322d94(lVar5,uVar7,DAT_091ea4a0,0);
    plVar1 = (long *)(*(long *)(DAT_09190d28 + 0xb8) + 8);
    *plVar1 = lVar5;
    thunk_FUN_03f5d7b8(plVar1,lVar5);
  }
  uVar7 = FUN_04b0cafc(lVar4,lVar5,DAT_091cb498);
  if (*(int *)(DAT_09190d28 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09190d28);
  }
  puVar2 = *(undefined8 **)(DAT_09190d28 + 0xb8);
  lVar4 = puVar2[2];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09190d28 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190d28);
      puVar2 = *(undefined8 **)(DAT_09190d28 + 0xb8);
    }
    uVar6 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_09178950);
    FUN_05324834(lVar4,uVar6,DAT_091ea4a8,0);
    plVar1 = (long *)(*(long *)(DAT_09190d28 + 0xb8) + 0x10);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  uVar7 = FUN_04aeac34(uVar7,lVar4,DAT_091ca008);
  uVar7 = FUN_04b08b78(uVar7,DAT_091cb188);
  fVar9 = *(float *)(lVar3 + 0x10);
  fVar8 = *(float *)(lVar3 + 0x14);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187e80);
  }
  uVar6 = 0;
  if (1.4013e-45 <= ABS(fVar8 - fVar9)) {
    uVar6 = CookingGraph_GenerationCurve__Clamp01
                      ((param_1 - *(float *)(lVar3 + 0x10)) /
                       (*(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 0x10)));
  }
  CookingGraph_GenerationCurve__EvaluateNormalized(uVar6,uVar7);
  fVar8 = (float)CookingGraph_GenerationCurve__Clamp01();
  return *(float *)(lVar3 + 0x18) + fVar8 * (*(float *)(lVar3 + 0x1c) - *(float *)(lVar3 + 0x18));
}

