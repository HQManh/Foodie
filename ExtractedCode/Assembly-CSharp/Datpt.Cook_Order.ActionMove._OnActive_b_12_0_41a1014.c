// rea decompile_all
// name: Datpt.Cook_Order.ActionMove$$<OnActive>b__12_0
// address: 0x41a1014
// body: available
// range: 0x41a1014-0x41a1273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a126c to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a1270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ActionMove__<OnActive>b__12_0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((DAT_09516842 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091e1330);
    FUN_03f5c2a4(&DAT_0918dff0);
    DAT_09516842 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(param_4,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = param_4[10];
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    uVar7 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
    if (DAT_09515fab == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515fab = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar3 = (float)lVar1 - (float)uVar7;
    fVar4 = (float)((ulong)lVar1 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
    fVar5 = 0.05;
    if (0.05 <= SQRT(fVar3 * fVar3 + fVar4 * fVar4)) {
      lVar1 = thunk_FUN_03f9944c(DAT_0918dff0);
      System_Object___ctor(lVar1,0);
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = (long)param_4;
        thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_4);
        if (param_4[8] != 0) {
          fVar3 = (float)UnityEngine_Transform__get_position(param_4[8],0);
          *(float *)(lVar1 + 0x10) = fVar3;
          *(float *)(lVar1 + 0x14) = fVar5;
          uVar7 = DG_Tweening_ShortcutExtensions__DOMove
                            (fVar3 + *(float *)(param_4 + 10),
                             fVar5 + *(float *)((long)param_4 + 0x54),0,
                             *(float *)(param_4 + 9) * *(float *)((long)param_4 + 0x4c),param_4[8],0
                             ,0);
          uVar2 = FUN_04d95e8c(uVar7,0xd,DAT_091dbeb0);
          uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar7,lVar1,DAT_091e1330,0);
          goto LAB_041a1254;
        }
      }
    }
    else {
      lVar1 = param_4[8];
      if (lVar1 != 0) {
        fVar6 = *(float *)(param_4 + 0xb);
        fVar4 = *(float *)((long)param_4 + 0x5c);
        fVar3 = (float)UnityEngine_Transform__get_position(lVar1,0);
        uVar2 = DG_Tweening_ShortcutExtensions__DOMove
                          (fVar6 + fVar3,fVar4 + fVar5,param_3 + 0.0,(int)param_4[9],lVar1,0,0);
        uVar7 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar7,param_4,*(undefined8 *)(*param_4 + 0x1a0),0);
LAB_041a1254:
        FUN_04d956bc(uVar2,uVar7,DAT_091dbd10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

