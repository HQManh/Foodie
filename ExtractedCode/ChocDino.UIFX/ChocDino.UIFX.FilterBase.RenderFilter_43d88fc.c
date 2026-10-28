// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$RenderFilter
// address: 0x43d88fc
// body: available
// range: 0x43d88fc-0x43d90af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d90ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint ChocDino_UIFX_FilterBase__RenderFilter(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 local_64;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_09517ca1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091845d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c48);
    FUN_03f5c2a4(&DAT_0918c760);
    FUN_03f5c2a4(&DAT_0921fec0);
    FUN_03f5c2a4(&DAT_09214488);
    DAT_09517ca1 = 1;
  }
  ChocDino_UIFX_FilterBase__GetResolutionScalingFactor(param_1);
  lVar6 = ChocDino_UIFX_FilterBase__GetRenderCamera(param_1);
  lVar11 = param_1[0x13];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar11,0);
  if ((uVar1 & 1) == 0) goto LAB_043d9088;
  if ((param_2 & 1) != 0) {
    ChocDino_UIFX_FilterBase__GenerateScreenRect(param_1);
  }
  if (DAT_09517b7f == '\0') {
    FUN_03f5c2a4(&DAT_091828b0);
    DAT_09517b7f = '\x01';
  }
  lVar11 = *(long *)(DAT_091828b0 + 0xb8);
  iVar4 = *(int *)(lVar11 + 4);
  if (DAT_09517b80 == '\0') {
    FUN_03f5c2a4(&DAT_091828b0);
    DAT_09517b80 = '\x01';
    lVar11 = *(long *)(DAT_091828b0 + 0xb8);
  }
  if (iVar4 == *(int *)(lVar11 + 8)) {
LAB_043d8a4c:
    uVar15 = 1;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    lVar11 = param_1[0x1c];
    plVar7 = (long *)ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
    if (plVar7 == (long *)0x0) goto LAB_043d90ac;
    uVar12 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar9 = UnityEngine_Object__op_Equality(lVar11,uVar12,0);
    if ((uVar9 & 1) == 0) {
      uVar12 = UnityEngine_Component__get_gameObject(param_1,0);
      if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091845d0);
      }
      uVar13 = *(undefined8 *)(*(long *)(DAT_091845d0 + 0xb8) + 0x88);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar12,uVar13,0);
      if ((uVar9 & 1) != 0) goto LAB_043d8b14;
    }
    else {
LAB_043d8b14:
      if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = (undefined8 *)(*(long *)(DAT_091845d0 + 0xb8) + 0x88);
      *puVar8 = 0;
      thunk_FUN_03f5d7b8(puVar8,0);
    }
    uVar12 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091845d0);
    }
    uVar13 = *(undefined8 *)(*(long *)(DAT_091845d0 + 0xb8) + 0x88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
    if (((uVar2 | uVar3) & 1) != 0) {
      if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = *(undefined8 *)(*(long *)(DAT_091845d0 + 0xb8) + 0x88);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar12,0,0);
      if ((uVar9 & 1) != 0) {
        uVar12 = UnityEngine_Component__get_gameObject(param_1,0);
        if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091845d0);
        }
        puVar8 = (undefined8 *)(*(long *)(DAT_091845d0 + 0xb8) + 0x88);
        *puVar8 = uVar12;
        thunk_FUN_03f5d7b8(puVar8,uVar12);
      }
      goto LAB_043d8a4c;
    }
    uVar15 = 0;
  }
  lVar11 = param_1[0xc];
  if (lVar11 != 0) {
    lVar14 = param_1[0xd];
    uVar12 = *(undefined8 *)(lVar11 + 0x4c);
    uVar13 = *(undefined8 *)(lVar11 + 0x54);
    lVar11 = lVar6;
    if (*(int *)((long)param_1 + 0x24) == 0) {
      if (param_1[0x13] == 0) goto LAB_043d90ac;
      UnityEngine_Canvas__get_scaleFactor(0x3f800000,param_1[0x13],0);
      lVar11 = 0;
    }
    if (lVar14 != 0) {
      uVar9 = ChocDino_UIFX_Compositor__Start(lVar14,lVar11,uVar12,uVar13,uVar15,0);
      if ((uVar9 & 1) == 0) {
LAB_043d9088:
        return uVar1 & 1;
      }
      iVar4 = UnityEngine_Screen__get_width(0);
      iVar5 = UnityEngine_Screen__get_height(0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
      if ((uVar9 & 1) != 0) {
        if (lVar6 == 0) goto LAB_043d90ac;
        iVar4 = UnityEngine_Camera__get_pixelWidth(lVar6,0);
        iVar5 = UnityEngine_Camera__get_pixelHeight(lVar6,0);
      }
      if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Shader__SetGlobalVectorImpl
                ((float)iVar4,(float)iVar5,1.0 / (float)iVar4 + 1.0,1.0 / (float)iVar5 + 1.0,
                 *(undefined4 *)(*(long *)(DAT_0918c760 + 0xb8) + 4),0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Debug__get_isDebugBuild(0);
      if ((uVar9 & 1) != 0) {
        if (param_1[0xd] == 0) goto LAB_043d90ac;
        if (*(char *)(param_1[0xd] + 0xc0) == '\0') {
          *(undefined1 *)(param_1 + 0x1b) = 0;
        }
        else if ((char)param_1[0x1b] == '\0') {
          *(undefined1 *)(param_1 + 0x1b) = 1;
          lVar11 = UnityEngine_Component__get_gameObject(param_1,0);
          if (lVar11 == 0) goto LAB_043d90ac;
          uVar13 = UnityEngine_Object__GetName(lVar11,0);
          uVar12 = DAT_0921fec0;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
          if (((uVar9 & 1) != 0) && (*(int *)((long)param_1 + 0x24) == 1)) {
            if (lVar6 == 0) goto LAB_043d90ac;
            uVar12 = UnityEngine_Object__GetName(lVar6,0);
          }
          lVar6 = FUN_03f5c394(DAT_09180318,5);
          if (lVar6 == 0) goto LAB_043d90ac;
          FUN_039b0da0(lVar6,uVar13);
          FUN_039af17c(lVar6,0,uVar13);
          if (param_1[0xc] == 0) goto LAB_043d90ac;
          uVar13 = *(undefined8 *)(param_1[0xc] + 0x54);
          if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_44 = (undefined4)uVar13;
          uVar13 = FUN_03f5c42c(DAT_09535420,&local_44);
          FUN_039b0da0(lVar6,uVar13);
          FUN_039af17c(lVar6,1,uVar13);
          if (param_1[0xc] == 0) goto LAB_043d90ac;
          local_48 = *(undefined4 *)(param_1[0xc] + 0x58);
          uVar13 = FUN_03f5c42c(DAT_09535420,&local_48);
          FUN_039b0da0(lVar6,uVar13);
          FUN_039af17c(lVar6,2,uVar13);
          uVar13 = DAT_09214488;
          uVar15 = 0x3f800000;
          if (*(int *)((long)param_1 + 0x24) == 0) {
            if (param_1[0x13] == 0) goto LAB_043d90ac;
            uVar15 = UnityEngine_Canvas__get_scaleFactor(param_1[0x13],0);
          }
          local_64 = uVar15;
          uVar10 = FUN_03f5c42c(DAT_09535450,&local_64);
          FUN_039b0da0(lVar6,uVar10);
          FUN_039af17c(lVar6,3,uVar10);
          FUN_039b0da0(lVar6,uVar12);
          FUN_039af17c(lVar6,4,uVar12);
          uVar12 = System_String__Format(uVar13,lVar6,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar12,param_1,0);
        }
      }
      uVar12 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar9 = UnityEngine_Object__op_Implicit(uVar12,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)((long)param_1 + 0xea) == '\0') {
          lVar6 = param_1[0xb];
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = UnityEngine_Object__op_Implicit(lVar6,0);
          if ((uVar9 & 1) != 0) {
            lVar6 = param_1[0x12];
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = UnityEngine_Object__op_Implicit(lVar6,0);
            if ((uVar9 & 1) != 0) {
              ChocDino_UIFX_FilterBase__SetupMaterialForRendering(param_1,param_1[0xb]);
            }
          }
        }
        lVar6 = param_1[0xd];
        if (*(int *)((long)param_1 + 0x24) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = UnityEngine_Component__get_transform(param_1,0);
        }
        if (lVar6 == 0) goto LAB_043d90ac;
        ChocDino_UIFX_Compositor__AddMesh
                  (lVar6,uVar12,param_1[0xf],param_1[0x12],(char)param_1[0x14],0,0);
      }
      if (param_1[0xd] != 0) {
        ChocDino_UIFX_Compositor__End(param_1[0xd],0);
        if (param_1[0xd] != 0) {
          uVar13 = *(undefined8 *)(param_1[0xd] + 0x10);
          uVar12 = (**(code **)(*param_1 + 0x358))(param_1,uVar13,*(undefined8 *)(*param_1 + 0x360))
          ;
          (**(code **)(*param_1 + 0x378))(param_1,uVar13,uVar12,*(undefined8 *)(*param_1 + 0x380));
          goto LAB_043d9088;
        }
      }
    }
  }
LAB_043d90ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

