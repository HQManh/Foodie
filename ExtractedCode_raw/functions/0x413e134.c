// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleKFC$$GetIngIds
// address: 0x413e134
// body: available
// range: 0x413e134-0x413e6c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413e6c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_FlexibleKFC__GetIngIds(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_40 [4];
  char local_3c [4];
  char local_38 [4];
  int local_34;
  
  if ((DAT_095163ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09218c68);
    FUN_03f5c2a4(&DAT_0921a898);
    FUN_03f5c2a4(&DAT_09218c20);
    FUN_03f5c2a4(&DAT_09218c18);
    FUN_03f5c2a4(&DAT_09218c50);
    FUN_03f5c2a4(&DAT_09218be8);
    FUN_03f5c2a4(&DAT_0921a890);
    FUN_03f5c2a4(&DAT_09218bf8);
    FUN_03f5c2a4(&DAT_09218c10);
    FUN_03f5c2a4(&DAT_0921a888);
    FUN_03f5c2a4(&DAT_0921b5e0);
    FUN_03f5c2a4(&DAT_0921a8a0);
    DAT_095163ae = 1;
  }
  local_34 = 0;
  local_38[0] = '\0';
  local_3c[0] = '\0';
  local_40[0] = '\0';
  lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar5,DAT_091b0558);
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_BurgerPieceTable__ChickenPiecesOfId(&local_58,param_2);
  uStack_68 = uStack_50;
  local_70 = local_58;
  local_60 = local_48;
  uVar6 = AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenState
                    (&local_70,&local_34,local_38,local_3c,local_40);
  cVar4 = local_3c[0];
  cVar3 = local_40[0];
  lVar9 = DAT_091b0570;
  if ((uVar6 & 1) == 0) {
    return lVar5;
  }
  if (local_38[0] == '\0') {
    if (local_40[0] == '\0' && local_3c[0] == '\0') {
      if (local_34 < 2) {
        if (local_34 == 0) {
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_09218bf8;
          goto LAB_0413e62c;
        }
        if (local_34 == 1) {
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_09218c10;
          goto LAB_0413e62c;
        }
LAB_0413e608:
        if (lVar5 == 0) goto LAB_0413e6c4;
      }
      else {
        if (local_34 == 2) {
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_09218c18;
        }
        else {
          if (local_34 != 3) goto LAB_0413e608;
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_09218c20;
        }
LAB_0413e62c:
        FUN_039b0ea8(lVar5,*puVar10,DAT_091b0570);
      }
      puVar10 = &DAT_0921b5e0;
    }
    else {
      uVar7 = DAT_09218be8;
      if (local_34 < 2) {
        if (local_34 == 0) {
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_0921a888;
          goto LAB_0413e51c;
        }
        if (local_34 == 1) {
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_0921a890;
          goto LAB_0413e51c;
        }
      }
      else {
        if (local_34 == 2) {
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_0921a898;
        }
        else {
          if (local_34 != 3) goto joined_r0x0413e580;
          if (lVar5 == 0) goto LAB_0413e6c4;
          puVar10 = &DAT_0921a8a0;
        }
LAB_0413e51c:
        lVar8 = *(long *)(lVar5 + 0x10);
        uVar7 = *puVar10;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0413e6c4;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_03f5d7b8();
          lVar9 = DAT_091b0570;
          uVar7 = DAT_09218be8;
        }
        else {
          FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          lVar9 = DAT_091b0570;
          uVar7 = DAT_09218be8;
        }
      }
joined_r0x0413e580:
      DAT_091b0570 = lVar9;
      DAT_09218be8 = uVar7;
      if (cVar4 != '\0') {
        if (lVar5 == 0) goto LAB_0413e6c4;
        lVar8 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0413e6c4;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      if (cVar3 == '\0') {
        return lVar5;
      }
      if (lVar5 == 0) goto LAB_0413e6c4;
      puVar10 = &DAT_09218c68;
    }
    iVar1 = *(int *)(lVar5 + 0x1c);
    lVar9 = *(long *)(lVar5 + 0x10);
    uVar7 = *puVar10;
  }
  else {
    if (local_34 < 2) {
      if (local_34 == 0) {
        if (lVar5 == 0) goto LAB_0413e6c4;
        puVar10 = &DAT_0921a888;
        goto LAB_0413e368;
      }
      if (local_34 == 1) {
        if (lVar5 == 0) goto LAB_0413e6c4;
        puVar10 = &DAT_0921a890;
        goto LAB_0413e368;
      }
LAB_0413e344:
      if (lVar5 == 0) goto LAB_0413e6c4;
    }
    else {
      if (local_34 == 2) {
        if (lVar5 == 0) goto LAB_0413e6c4;
        puVar10 = &DAT_0921a898;
      }
      else {
        if (local_34 != 3) goto LAB_0413e344;
        if (lVar5 == 0) goto LAB_0413e6c4;
        puVar10 = &DAT_0921a8a0;
      }
LAB_0413e368:
      lVar8 = *(long *)(lVar5 + 0x10);
      uVar7 = *puVar10;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0413e6c4;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    uVar7 = DAT_09218c50;
    lVar9 = DAT_091b0570;
    lVar8 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_0413e6c4;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = DAT_09218be8;
    lVar9 = DAT_091b0570;
    if (local_3c[0] != '\0') {
      lVar8 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0413e6c4;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (local_40[0] == '\0') {
      return lVar5;
    }
    iVar1 = *(int *)(lVar5 + 0x1c);
    lVar9 = *(long *)(lVar5 + 0x10);
    uVar7 = DAT_09218c68;
  }
  lVar8 = DAT_091b0570;
  *(int *)(lVar5 + 0x1c) = iVar1 + 1;
  if (lVar9 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    return lVar5;
  }
LAB_0413e6c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

