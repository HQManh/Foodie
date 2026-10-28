// rea decompile_all
// name: DG.Tweening.Tween$$DoGoto
// address: 0x454d984
// body: available
// range: 0x454d984-0x454dca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454dca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool DG_Tweening_Tween__DoGoto(float param_1,long *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)((long)param_2 + 0x101) == '\0') &&
     (uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0)),
     (uVar8 & 1) == 0)) {
    return true;
  }
  if ((param_4 == 0) && (*(char *)((long)param_2 + 0x102) == '\0')) {
    *(undefined1 *)((long)param_2 + 0x102) = 1;
    if ((param_2[4] != 0) &&
       (DG_Tweening_Tween__OnTweenCallback(param_2[4],param_2), (char)param_2[0x1d] == '\0')) {
      return true;
    }
    if ((param_2[0xb] != 0) &&
       (DG_Tweening_Tween__OnTweenCallback(param_2[0xb],param_2), (char)param_2[0x1d] == '\0')) {
      return true;
    }
  }
  uVar1 = *(uint *)((long)param_2 + 0x10c);
  uVar2 = *(uint *)((long)param_2 + 0xa4);
  bVar3 = *(byte *)((long)param_2 + 0x111);
  *(uint *)((long)param_2 + 0x10c) = param_3;
  bVar7 = bVar3;
  if (uVar2 != 0xffffffff) {
    bVar7 = uVar2 == param_3;
    *(byte *)((long)param_2 + 0x111) = bVar7;
  }
  uVar12 = (uint)(0.0 < *(float *)((long)param_2 + 0x104) || 0 < (int)uVar1);
  if (param_4 == 0) {
    if (*(char *)((long)param_2 + 0x2c) == '\0') {
      iVar11 = param_3 - uVar1;
      if (param_3 - uVar1 == 0 || (int)param_3 < (int)uVar1) {
        iVar11 = 0;
      }
    }
    else {
      uVar10 = uVar1 - param_3;
      if ((uVar1 - param_3 == 0 || (int)uVar1 < (int)param_3) && (uVar10 = uVar12, 0.0 < param_1)) {
        uVar10 = 0;
      }
      iVar11 = uVar10 - (bVar3 != 0);
    }
  }
  else if ((int)param_2[2] == 1) {
    iVar5 = uVar1 - param_3;
    iVar11 = -iVar5;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
  }
  else {
    iVar11 = 0;
  }
  fVar13 = *(float *)(param_2 + 0x14);
  *(float *)((long)param_2 + 0x104) = param_1;
  fVar6 = fVar13;
  if (param_1 <= fVar13) {
    if (0.0 < param_1) goto LAB_0454dad8;
    fVar6 = 0.0;
    if (bVar7 != 0 || 0 < (int)param_3) {
      fVar6 = fVar13;
    }
  }
  param_1 = fVar6;
  *(float *)((long)param_2 + 0x104) = param_1;
LAB_0454dad8:
  bVar4 = *(byte *)(param_2 + 0x22);
  if (bVar4 != 0) {
    if (*(char *)((long)param_2 + 0x2c) == '\0') {
      bVar7 = bVar7 ^ 1;
    }
    else {
      bVar7 = 0.0 < param_1 || param_3 != 0;
    }
    *(byte *)(param_2 + 0x22) = bVar7;
  }
  if (((uVar2 == 0xffffffff) || (1 < (int)uVar2)) && ((int)param_2[0x15] == 1)) {
    uVar10 = param_3 & 1;
    if (fVar13 <= param_1) {
      uVar10 = uVar10 ^ 1;
    }
  }
  else {
    uVar10 = 0;
  }
  if ((uVar12 == 0) ||
     (((((int)uVar2 <= (int)param_3 && uVar2 != 0xffffffff || ((int)param_2[0x15] != 0)) ||
       (uVar1 == param_3)) && ((0 < (int)param_3 || (0.0 < param_1)))))) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  uVar8 = (**(code **)(*param_2 + 0x1b8))
                    (param_2,uVar1,iVar11,uVar10,param_4,uVar9,*(undefined8 *)(*param_2 + 0x1c0));
  if ((uVar8 & 1) != 0) {
    return true;
  }
  if ((param_4 != 2) && (param_2[0xe] != 0)) {
    DG_Tweening_Tween__OnTweenCallback(param_2[0xe],param_2);
  }
  if (*(float *)((long)param_2 + 0x104) <= 0.0) {
    uVar1 = 0;
    if (*(int *)((long)param_2 + 0x10c) < 1) {
      uVar1 = uVar12;
    }
    if ((uVar1 == 1) && (param_2[0xd] != 0)) {
      DG_Tweening_Tween__OnTweenCallback(param_2[0xd],param_2);
    }
  }
  if (((param_4 == 0) && (0 < iVar11)) && (param_2[0xf] != 0)) {
    do {
      iVar11 = iVar11 + -1;
      DG_Tweening_Tween__OnTweenCallback(param_2[0xf],param_2);
      if ((char)param_2[0x1d] == '\0') break;
    } while (iVar11 != 0);
  }
  if (((bVar3 == 0) && (param_4 != 3)) &&
     ((*(char *)((long)param_2 + 0x111) != '\0' && (param_2[0x10] != 0)))) {
    DG_Tweening_Tween__OnTweenCallback(param_2[0x10],param_2);
  }
  if ((((bVar4 & (*(byte *)(param_2 + 0x22) ^ 0xff)) != 0) &&
      ((*(char *)((long)param_2 + 0x111) == '\0' || (*(char *)((long)param_2 + 0x9c) == '\0')))) &&
     (param_2[0xc] != 0)) {
    DG_Tweening_Tween__OnTweenCallback(param_2[0xc],param_2);
  }
  if (*(char *)((long)param_2 + 0x9c) == '\0') {
    return false;
  }
  return *(char *)((long)param_2 + 0x111) != '\0';
}

