// rea decompile_all
// name: Coffee.UIExtensions.UIParticleUpdater$$Refresh
// address: 0x4405ef0
// body: available
// range: 0x4405ef0-0x44062cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44062c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleUpdater__Refresh(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  
  if ((DAT_09517ea3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091b1630);
    FUN_03f5c2a4(&DAT_091b1600);
    FUN_03f5c2a4(&DAT_091b1608);
    FUN_03f5c2a4(&DAT_091b1638);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c448);
    DAT_09517ea3 = 1;
  }
  if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar8 = *(int *)(*(long *)(DAT_0918c448 + 0xb8) + 0x18);
  iVar1 = UnityEngine_Time__get_frameCount(0);
  if (iVar8 == iVar1) {
    return;
  }
  uVar2 = UnityEngine_Time__get_frameCount(0);
  if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c448);
  }
  lVar4 = DAT_0918c448;
  iVar8 = 0;
  *(undefined4 *)(*(long *)(DAT_0918c448 + 0xb8) + 0x18) = uVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424(lVar4);
      lVar4 = DAT_0918c448;
    }
    lVar3 = **(long **)(lVar4 + 0xb8);
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) <= iVar8) {
      iVar8 = 0;
      goto LAB_0440611c;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424(lVar4);
      lVar3 = **(long **)(DAT_0918c448 + 0xb8);
      if (lVar3 == 0) break;
    }
    lVar4 = FUN_057e0998(lVar3,iVar8,DAT_091b1608);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) break;
      uVar6 = UnityEngine_UI_Graphic__get_canvas(lVar4,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
      if (((uVar5 & 1) != 0) && ((*(uint *)(lVar4 + 0xf8) & 0xfffffffe) == 2)) {
        if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_0918c448 + 0xb8) + 0x10);
        if (lVar3 == 0) break;
        uVar5 = FUN_053d8048(lVar3,*(undefined4 *)(lVar4 + 0x130),DAT_091a82b0);
        if ((uVar5 & 1) != 0) {
          Coffee_UIExtensions_UIParticle__UpdateTransformScale(lVar4);
          Coffee_UIExtensions_UIParticle__UpdateRenderers(lVar4);
        }
      }
    }
    iVar8 = iVar8 + 1;
    lVar4 = DAT_0918c448;
  }
LAB_044062c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0440611c:
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424(lVar4);
    lVar4 = DAT_0918c448;
  }
  plVar7 = *(long **)(lVar4 + 0xb8);
  lVar3 = *plVar7;
  if (lVar3 == 0) goto LAB_044062c8;
  if (*(int *)(lVar3 + 0x18) <= iVar8) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424(lVar4);
      plVar7 = *(long **)(DAT_0918c448 + 0xb8);
    }
    if (plVar7[2] != 0) {
      FUN_053d74ac(plVar7[2],DAT_091a82b8);
      iVar8 = 0;
      goto LAB_04406260;
    }
    goto LAB_044062c8;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424(lVar4);
    lVar3 = **(long **)(DAT_0918c448 + 0xb8);
    if (lVar3 == 0) goto LAB_044062c8;
  }
  lVar4 = FUN_057e0998(lVar3,iVar8,DAT_091b1608);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) goto LAB_044062c8;
    uVar6 = UnityEngine_UI_Graphic__get_canvas(lVar4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar5 & 1) != 0) {
      Coffee_UIExtensions_UIParticle__UpdateTransformScale(lVar4);
      if (*(int *)(lVar4 + 0xf8) != 0) {
        if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_0918c448 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_044062c8;
        uVar5 = FUN_053d8048(lVar3,*(undefined4 *)(lVar4 + 0x130),DAT_091a82b0);
        if ((uVar5 & 1) == 0) goto LAB_0440621c;
      }
      Coffee_UIExtensions_UIParticle__UpdateRenderers(lVar4);
    }
  }
LAB_0440621c:
  iVar8 = iVar8 + 1;
  lVar4 = DAT_0918c448;
  goto LAB_0440611c;
LAB_04406260:
  if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_0918c448 + 0xb8) + 8);
  if (lVar4 == 0) goto LAB_044062c8;
  if (*(int *)(lVar4 + 0x18) <= iVar8) {
    return;
  }
  if (*(int *)(DAT_0918c448 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *(long *)(*(long *)(DAT_0918c448 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_044062c8;
  }
  lVar4 = FUN_057e0998(lVar4,iVar8,DAT_091b1638);
  if (lVar4 == 0) goto LAB_044062c8;
  Coffee_UIExtensions_UIParticleAttractor__Attract();
  iVar8 = iVar8 + 1;
  goto LAB_04406260;
}

