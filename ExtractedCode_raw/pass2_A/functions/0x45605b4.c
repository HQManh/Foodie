// rea decompile_all
// name: DG.Tweening.DOTweenProShortcuts$$DOSpiral
// address: 0x45605b4
// body: available
// range: 0x45605b4-0x456096f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456096c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenProShortcuts__DOSpiral
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,ulong param_6,undefined8 param_7,undefined4 param_8,byte param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  ulong local_b0;
  undefined8 uStack_a8;
  
  local_b0 = param_6;
  uStack_a8 = param_7;
  if ((DAT_09518832 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e30);
    FUN_03f5c2a4(&DAT_09175e80);
    FUN_03f5c2a4(&DAT_091c71c0);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b7640);
    FUN_03f5c2a4(&DAT_091b7638);
    FUN_03f5c2a4(&DAT_091b7648);
    FUN_03f5c2a4(&DAT_091b7650);
    FUN_03f5c2a4(&DAT_0918af00);
    FUN_03f5c2a4(&DAT_091dbfc0);
    FUN_03f5c2a4(&DAT_091e8910);
    FUN_03f5c2a4(&DAT_091e8918);
    FUN_03f5c2a4(&DAT_0918fc98);
    DAT_09518832 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918fc98);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_0456096c;
  puVar7 = (undefined8 *)(lVar1 + 0x10);
  *puVar7 = param_5;
  thunk_FUN_03f5d7b8(puVar7,param_5);
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar13 = **(float **)(DAT_09187e98 + 0xb8);
  if ((param_6 & 0xff) == 0) {
LAB_045607b0:
    if (DAT_09517b1f == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09517b1f = '\x01';
    }
    lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
    uVar11 = *(undefined4 *)(lVar6 + 0x4c);
    fVar12 = *(float *)(lVar6 + 0x50);
    FUN_05c3a618(*(undefined4 *)(lVar6 + 0x48),uVar11,fVar12,&local_b0,DAT_091b7638);
  }
  else {
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar5 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar12 = (float)((ulong)param_7 >> 0x20) - pfVar5[2];
    fVar8 = (float)(param_6 >> 0x20) - *pfVar5;
    fVar10 = (float)param_7 - pfVar5[1];
    uVar11 = 0x2edbe6fe;
    if (fVar12 * fVar12 + fVar8 * fVar8 + fVar10 * fVar10 < 9.9999994e-11) goto LAB_045607b0;
  }
  if (*(int *)(DAT_0918af00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = DG_Tweening_Plugins_SpiralPlugin__Get(0);
  uVar3 = thunk_FUN_03f9944c(DAT_09175e30);
  FUN_06dfb558(uVar3,lVar1,DAT_091e8910,0);
  uVar4 = thunk_FUN_03f9944c(DAT_09175e80);
  FUN_06dfc74c(uVar4,lVar1,DAT_091e8918,0);
  uVar9 = FUN_05c3a634(&local_b0,DAT_091b7650);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = FUN_04a7e1d0(uVar9,uVar11,fVar12,param_1,uVar2,uVar3,uVar4,DAT_091c71c0);
  lVar1 = FUN_04d9642c(uVar2,*puVar7,DAT_091dbfc0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x154) = param_8;
    *(undefined4 *)(lVar1 + 0x14c) = param_3;
    fVar8 = ABS(param_2);
    if (ABS(param_2) <= 0.0) {
      fVar8 = 0.0;
    }
    fVar13 = fVar13 * 8.0;
    *(undefined4 *)(lVar1 + 0x148) = param_4;
    *(byte *)(lVar1 + 0x158) = param_9 & 1;
    fVar10 = fVar8 * 1e-06;
    if (fVar8 * 1e-06 <= fVar13) {
      fVar10 = fVar13;
    }
    fVar13 = 1.0;
    if (fVar10 <= ABS(0.0 - param_2)) {
      fVar13 = param_2;
    }
    *(float *)(lVar1 + 0x150) = fVar13;
    return;
  }
LAB_0456096c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

