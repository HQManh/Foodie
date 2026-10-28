// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<PlayMapBgmAsync>d__51$$MoveNext
// address: 0x430a78c
// body: available
// range: 0x430a78c-0x430ac73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430ac54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430ac70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<PlayMapBgmAsync>d__51__MoveNext(int *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_095175a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf700);
    FUN_03f5c2a4(&DAT_091978c0);
    FUN_03f5c2a4(&DAT_091978c8);
    FUN_03f5c2a4(&DAT_091c27c0);
    FUN_03f5c2a4(&DAT_0919a650);
    FUN_03f5c2a4(&DAT_0919a658);
    FUN_03f5c2a4(&DAT_0919ef90);
    FUN_03f5c2a4(&DAT_0919efa0);
    FUN_03f5c2a4(&DAT_091d28f0);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde88);
    DAT_095175a5 = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0x14);
    uStack_78 = *(undefined8 *)(param_1 + 0x12);
    local_80 = *(long **)(param_1 + 0x10);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_0430aa34:
    plVar1 = local_80;
    if (local_80 != (long *)0x0) {
      uVar3 = local_70 & 0xffff;
      lVar4 = *(long *)(DAT_0919a650 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar7 = *plVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0430aac8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar1,lVar4,0);
LAB_0430aac8:
      (*(code *)*puVar5)(plVar1,uVar3,puVar5[1]);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar10,0);
    if ((uVar3 & 1) == 0) goto LAB_0430ac14;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = System_String__op_Inequality
                      (*(undefined8 *)(*(long *)(lVar10 + 0x118) + 0x20),
                       *(undefined8 *)(param_1 + 4),0);
    if ((uVar3 & 1) != 0) goto LAB_0430ac14;
    iVar2 = FUN_0640f818(param_1 + 10,DAT_091978c8);
    if (iVar2 == 1) {
      uVar6 = FUN_0640f7ac(param_1 + 10,DAT_091978c0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_0640f7ac(param_1 + 10,DAT_091978c0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = CakeOrder_DataSO_MapAssetPackSO__GetRandomHomeMusic(lVar4,0);
        *(undefined8 *)(param_1 + 8) = uVar6;
        thunk_FUN_03f5d7b8();
      }
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    piVar9 = param_1 + 8;
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_03f5d7b8(piVar9,0);
    uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 4),0);
    if ((uVar3 & 1) == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar10 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = FUN_06f6d800(*(long *)(lVar10 + 0x198),*(undefined8 *)(param_1 + 4),param_1 + 10,
                           DAT_0919ef90);
      if ((uVar3 & 1) == 0) {
        FUN_04bfccd0(&local_60,*(undefined8 *)(param_1 + 4),5,DAT_091d28f0);
        uStack_c8 = uStack_58;
        local_d0 = local_60;
        local_c0 = local_50;
        *(undefined8 *)(param_1 + 0xc) = uStack_58;
        *(long **)(param_1 + 10) = local_60;
        *(ulong *)(param_1 + 0xe) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        if (*(long *)(lVar10 + 0x198) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uStack_58 = *(undefined8 *)(param_1 + 0xc);
        local_60 = *(long **)(param_1 + 10);
        local_50 = *(ulong *)(param_1 + 0xe);
        FUN_06f6bb08(*(long *)(lVar10 + 0x198),*(undefined8 *)(param_1 + 4),&local_60,DAT_0919efa0);
      }
      uStack_58 = *(undefined8 *)(param_1 + 0xc);
      local_60 = *(long **)(param_1 + 10);
      local_50 = *(ulong *)(param_1 + 0xe);
      FUN_04b722fc(&local_d0,&local_60,0,8,0,0,0,DAT_091bf700);
      uStack_58 = 0;
      local_50 = 0;
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
      local_90 = local_c0;
      local_60 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bde88 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_58 = uStack_98;
      local_60 = local_a0;
      local_50 = local_90;
      thunk_FUN_03f5d7b8(&local_60,0);
      uStack_78 = uStack_58;
      local_80 = local_60;
      local_70 = local_50;
      uVar3 = FUN_041e5390(&local_80,DAT_0919a658);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = uStack_78;
        *(long **)(param_1 + 0x10) = local_80;
        *(ulong *)(param_1 + 0x14) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_0430d558(param_1 + 2,&local_80,param_1,DAT_091c27c0);
        return;
      }
      goto LAB_0430aa34;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Home_HomeControllerCookOrder__PlayDefaultBgmMusic(lVar10);
  }
  else {
    lVar10 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_AudioManagerCakeOrder__PlayMusic
              (0x3f800000,**(long **)(lVar10 + 0xb8),*(undefined8 *)(param_1 + 8),1,0);
  }
LAB_0430ac14:
  piVar9 = param_1 + 8;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar9,0);
  FUN_042dada8(param_1 + 2,0);
  return;
}

