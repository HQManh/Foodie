// rea decompile_all
// name: AnhPD.FoodOrder.UIHintRecipe$$Init
// address: 0x4127e80
// body: available
// range: 0x4127e80-0x41282cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41282a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41282c8 to 0x412a230 AnhPD.FoodOrder.UIHintRecipe$$ApplyLayout (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintRecipe__Init(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if ((DAT_095162f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091b13d8);
    FUN_03f5c2a4(&DAT_091af618);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091b13e0);
    FUN_03f5c2a4(&DAT_091af620);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091b13e8);
    FUN_03f5c2a4(&DAT_091d4d58);
    FUN_03f5c2a4(&DAT_091d4db0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162f7 = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
  if ((lVar4 != 0) && (UnityEngine_GameObject__SetActive(lVar4,1,0), param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x18);
    iVar10 = *(int *)(param_1 + 0x30);
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    fVar11 = (float)iVar1 / (float)iVar10;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar10 = -0x80000000;
    if ((float)(int)fVar11 != INFINITY) {
      iVar10 = (int)fVar11;
    }
    iVar10 = iVar1 - iVar10;
    if (iVar1 < 1) {
      iVar10 = 0;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
      iVar9 = iVar1 - iVar7;
      if (iVar9 != 0 && iVar7 <= iVar1) {
        do {
          lVar4 = *(long *)(param_1 + 0x48);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          uVar5 = UnityEngine_Component__get_transform(param_1,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = FUN_04c353a8(uVar8,uVar5,0,DAT_091d4db0);
          lVar3 = DAT_091b13d8;
          if (lVar4 == 0) goto LAB_041282a0;
          lVar6 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_041282a0;
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar4,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_041282a0;
          lVar4 = FUN_057e0998(*(long *)(param_1 + 0x48),iVar7,DAT_091b13e8);
          uVar5 = FUN_057e0998(param_2,iVar7,DAT_091af620);
          if (lVar4 == 0) goto LAB_041282a0;
          AnhPD_FoodOrder_UIHintRecipeComponent__Init(lVar4,uVar5);
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
      }
      lVar4 = *(long *)(param_1 + 0x48);
      iVar7 = iVar1;
      if (lVar4 != 0) {
        while (iVar7 < *(int *)(lVar4 + 0x18)) {
          lVar4 = FUN_057e0998(lVar4,iVar7,DAT_091b13e8);
          if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
          goto LAB_041282a0;
          UnityEngine_GameObject__SetActive(lVar4,0,0);
          lVar4 = *(long *)(param_1 + 0x48);
          iVar7 = iVar7 + 1;
          if (lVar4 == 0) goto LAB_041282a0;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          iVar7 = *(int *)(*(long *)(param_1 + 0x50) + 0x18);
          iVar9 = iVar10 - iVar7;
          if (iVar9 == 0 || iVar10 < iVar7) goto LAB_04128228;
          goto LAB_04128184;
        }
      }
    }
  }
  goto LAB_041282a0;
  while( true ) {
    lVar6 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_041282a0;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) break;
LAB_04128184:
    lVar4 = *(long *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = UnityEngine_Component__get_transform(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = FUN_04c353a8(uVar8,uVar5,0,DAT_091d4d58);
    lVar3 = DAT_091acd50;
    if (lVar4 == 0) goto LAB_041282a0;
  }
LAB_04128228:
  if (0 < iVar10) {
    iVar7 = 0;
    do {
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x50),iVar7,DAT_091acd88), lVar4 == 0))
      goto LAB_041282a0;
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      iVar7 = iVar7 + 1;
    } while (iVar10 != iVar7);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= iVar10) {
      AnhPD_FoodOrder_UIHintRecipe__ApplyLayout(param_1,iVar1);
      return;
    }
    lVar4 = FUN_057e0998(lVar4,iVar10,DAT_091acd88);
    if (lVar4 == 0) break;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
    iVar10 = iVar10 + 1;
    lVar4 = *(long *)(param_1 + 0x50);
  }
LAB_041282a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

