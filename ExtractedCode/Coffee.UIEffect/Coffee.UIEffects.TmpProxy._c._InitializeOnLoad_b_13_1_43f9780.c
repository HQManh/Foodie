// rea decompile_all
// name: Coffee.UIEffects.TmpProxy.<>c$$<InitializeOnLoad>b__13_1
// address: 0x43f9780
// body: available
// range: 0x43f9780-0x43f9c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f9c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_TmpProxy_<>c__<InitializeOnLoad>b__13_1(undefined1 param_1 [16],float param_2)

{
  uint uVar1;
  float fVar2;
  long *plVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  float local_a4;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  long local_88;
  
  if ((DAT_09517e26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dc00);
    FUN_03f5c2a4(&DAT_0919dc08);
    FUN_03f5c2a4(&DAT_0919dc30);
    FUN_03f5c2a4(&DAT_091a4850);
    FUN_03f5c2a4(&DAT_091a4838);
    FUN_03f5c2a4(&DAT_091a4840);
    FUN_03f5c2a4(&DAT_091a4858);
    FUN_03f5c2a4(&DAT_091a4860);
    FUN_03f5c2a4(&DAT_091a4848);
    FUN_03f5c2a4(&DAT_091a87c0);
    FUN_03f5c2a4(&DAT_091a87d0);
    FUN_03f5c2a4(&DAT_091a87d8);
    FUN_03f5c2a4(&DAT_091a90f0);
    FUN_03f5c2a4(&DAT_091a90f8);
    FUN_03f5c2a4(&DAT_091b0dd0);
    FUN_03f5c2a4(&DAT_091b0dd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918be78);
    DAT_09517e26 = 1;
  }
  local_90 = (long *)0x0;
  local_88 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a4 = 0.0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = (long *)0x0;
  lVar6 = FUN_055656f4(DAT_091a90f0);
  local_88 = lVar6;
  if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918be78);
  }
  lVar7 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x30);
  if (lVar7 != 0) {
    FUN_053ec0b0(&local_d8,lVar7,DAT_091a87d0);
    local_90 = local_c8;
    puStack_98 = puStack_d0;
    local_a0 = local_d8;
    local_d8 = 0;
    puStack_d0 = &local_a0;
LAB_043f9958:
    while (uVar8 = FUN_071bb7b4(&local_a0,DAT_091a4840), plVar3 = local_90, (uVar8 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = UnityEngine_Object__op_Implicit(plVar3,0);
      if ((uVar8 & 1) == 0) goto LAB_043f9ae4;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = UnityEngine_Behaviour__get_isActiveAndEnabled(plVar3,0);
      if (((uVar8 & 1) == 0) || ((char)plVar3[0x6c] != '\0')) goto LAB_043f9ae8;
      uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      lVar7 = TMPro_TMP_Text__get_transform(plVar3,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_lossyScale(lVar7,0);
      fVar11 = param_2;
      if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x38);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = FUN_06efc828(lVar7,uVar5,&local_a4,DAT_0919dc08);
      fVar4 = local_a4;
      if ((uVar8 & 1) != 0) {
        if (DAT_09515cee == '\0') {
          FUN_03f5c2a4(&DAT_09187e98);
          DAT_09515cee = '\x01';
        }
        fVar11 = ABS(fVar4);
        if (fVar11 <= ABS(param_2)) {
          fVar11 = ABS(param_2);
        }
        fVar12 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
        fVar2 = fVar11 * 1e-06;
        if (fVar11 * 1e-06 <= fVar12) {
          fVar2 = fVar12;
        }
        fVar11 = ABS(param_2 - fVar4);
        if (fVar2 <= fVar11) {
          if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x28);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_053ec72c(lVar7,plVar3,DAT_091a87c0);
        }
      }
      if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x38);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06efae9c(param_2,lVar7,uVar5,DAT_0919dc30);
      param_2 = fVar11;
    }
    FUN_071bb7b0(&local_a0,DAT_091a4838);
    if (local_88 != 0) {
      FUN_057e185c(&local_d8,local_88,DAT_091b0dd8);
      local_b0 = local_c8;
      puStack_b8 = puStack_d0;
      local_c0 = local_d8;
      local_d8 = 0;
      puStack_d0 = &local_c0;
      while( true ) {
        uVar8 = FUN_071bd28c(&local_c0,DAT_091a4858);
        plVar3 = local_b0;
        if ((uVar8 & 1) == 0) {
          FUN_071bd288(&local_c0,DAT_091a4850);
          FUN_05565758(&local_88,DAT_091a90f8);
          return;
        }
        if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x38);
        uVar8 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar8,uVar8 & 0xffffffff);
        }
        FUN_06efc290(lVar6,uVar8 & 0xffffffff,DAT_0919dc00);
        lVar6 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x30);
        if (lVar6 == 0) break;
        FUN_053ebe0c(lVar6,plVar3,DAT_091a87d8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_043f9ae4:
  if (plVar3 != (long *)0x0) {
LAB_043f9ae8:
    lVar7 = DAT_091b0dd0;
    if (lVar6 != 0) {
      lVar10 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = plVar3;
          thunk_FUN_03f5d7b8(puVar9,plVar3);
        }
        else {
          FUN_057e0c68(lVar6,plVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_043f9958;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_043f9958;
}

