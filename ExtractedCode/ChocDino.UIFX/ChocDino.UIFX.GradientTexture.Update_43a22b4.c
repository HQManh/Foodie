// rea decompile_all
// name: ChocDino.UIFX.GradientTexture$$Update
// address: 0x43a22b4
// body: available
// range: 0x43a22b4-0x43a249b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a2468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a2498 to 0x8635988 UnityEngine.Texture2D$$Apply (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_GradientTexture__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_09517aaa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bc08);
    DAT_09517aaa = 1;
  }
  plVar6 = (long *)(param_5 + 0x18);
  lVar8 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar8,0,0);
  if ((uVar3 & 1) != 0) {
    uVar10 = *(undefined4 *)(param_5 + 0x10);
    uVar4 = thunk_FUN_03f9944c(DAT_0918bc08);
    UnityEngine_Texture2D___ctor(uVar4,uVar10,1,0x11,0,0);
    *(undefined8 *)(param_5 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8(plVar6,uVar4);
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_043a2468;
    UnityEngine_Texture__set_filterMode(*(long *)(param_5 + 0x18),1,0);
    if (*plVar6 == 0) goto LAB_043a2468;
    UnityEngine_Texture__set_wrapMode(*plVar6,1,0);
  }
  plVar5 = (long *)*plVar6;
  if (plVar5 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    plVar5 = (long *)*plVar6;
    if (plVar5 != (long *)0x0) {
      uVar10 = 0x3f800000;
      iVar7 = 0;
      do {
        iVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        lVar8 = *plVar6;
        if (iVar2 <= iVar7) {
          if (lVar8 != 0) {
            UnityEngine_Texture2D__Apply(lVar8,0,0,0);
            return;
          }
          break;
        }
        if (param_6 == 0) break;
        UnityEngine_Gradient__Evaluate((1.0 / (float)(iVar1 + -1)) * (float)iVar7,param_6,0);
        uVar9 = UnityEngine_Mathf__GammaToLinearSpace(0);
        uVar10 = UnityEngine_Mathf__GammaToLinearSpace(uVar10,0);
        param_3 = UnityEngine_Mathf__GammaToLinearSpace(param_3,0);
        if (lVar8 == 0) break;
        UnityEngine_Texture2D__SetPixel(uVar9,uVar10,param_3,param_4,lVar8,iVar7,0,0);
        plVar5 = (long *)*plVar6;
        iVar7 = iVar7 + 1;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_043a2468:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

