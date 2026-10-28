// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewCutting$$Play
// address: 0x4106a10
// body: available
// range: 0x4106a10-0x4106ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4106dd4 to 0x4547928 DG.Tweening.TweenSettingsExtensions$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4106dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewCutting__Play(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  double __x;
  float fVar14;
  double local_88;
  
  if ((DAT_09516194 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091eaf60);
    FUN_03f5c2a4(&DAT_09191128);
    DAT_09516194 = 1;
  }
  lVar6 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar6 == 0) goto LAB_04106dd8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_2 + 0x20),0), lVar6 == 0))
  goto LAB_04106dd8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  AnhPD_FoodOrder_GroupViewCutting__ResetState(param_2);
  if (*(long *)(param_2 + 0x38) == 0) goto LAB_04106dd8;
  iVar3 = *(int *)(*(long *)(param_2 + 0x38) + 0x18);
  fVar14 = 0.05;
  if (0.05 <= param_1 + -0.2) {
    fVar14 = param_1 + -0.2;
  }
  fVar13 = 0.01;
  if (0.01 <= *(float *)(param_2 + 0x48)) {
    fVar13 = *(float *)(param_2 + 0x48);
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)(fVar14 / fVar13);
  iVar3 = iVar3 + -1;
  dVar11 = modf(__x,&local_88);
  if (0.0 <= fVar14 / fVar13) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_04106b90;
    }
    local_88 = (double)(long)(__x + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_04106b90:
    if (((long)local_88 & 1U) != 0) {
      local_88 = local_88 + dVar11;
    }
  }
  else {
    local_88 = (double)(long)(__x + -0.5);
  }
  lVar6 = *(long *)(param_2 + 0x50);
  iVar10 = -0x80000000;
  if (local_88 != INFINITY) {
    iVar10 = (int)local_88;
  }
  iVar2 = iVar3;
  if (iVar3 <= iVar10) {
    iVar2 = iVar10;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (lVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar6,0,0);
  }
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = DG_Tweening_DOTween__Sequence(0);
  *(undefined8 *)(param_2 + 0x50) = uVar7;
  thunk_FUN_03f5d7b8((long *)(param_2 + 0x50),uVar7);
  uVar8 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                    (0,0,*(undefined4 *)(param_2 + 0x40),0x3dcccccd,*(undefined8 *)(param_2 + 0x20),
                     0,0);
  DG_Tweening_TweenSettingsExtensions__Append(uVar7,uVar8,0);
  uVar8 = NEON_fmov(0x3fc00000,4);
  iVar10 = 1;
  iVar1 = iVar3;
  while( true ) {
    lVar6 = thunk_FUN_03f9944c(DAT_09191128);
    System_Object___ctor(lVar6,0);
    if (lVar6 == 0) break;
    *(long *)(lVar6 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x18),param_2);
    cVar5 = DAT_0951615d;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    *(int *)(lVar6 + 0x10) = iVar4;
    if (cVar5 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_0951615d = '\x01';
    }
    uVar12 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x24);
    fVar13 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar8 >> 0x20);
    uVar9 = DG_Tweening_ShortcutExtensions__DOPunchPosition
                      (CONCAT44(fVar13,(float)uVar12 * (float)uVar8),fVar13,
                       *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x2c) * 1.5,fVar14 / (float)iVar2
                       ,0x3f800000,uVar9,1,0,0);
    uVar12 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar12,lVar6,DAT_091eaf60,0);
    uVar9 = FUN_04d956bc(uVar9,uVar12,DAT_091dbd28);
    DG_Tweening_TweenSettingsExtensions__Append(uVar7,uVar9,0);
    iVar10 = iVar10 + 1;
    iVar1 = iVar1 + iVar3;
    if (iVar2 < iVar10) {
      uVar8 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                        (0,0,*(undefined4 *)(param_2 + 0x44),0x3dcccccd,
                         *(undefined8 *)(param_2 + 0x20),0,0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar7,uVar8,0);
      return;
    }
  }
LAB_04106dd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

