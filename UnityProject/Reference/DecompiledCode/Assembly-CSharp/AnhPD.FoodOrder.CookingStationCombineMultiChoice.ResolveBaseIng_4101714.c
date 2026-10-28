// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationCombineMultiChoice$$ResolveBaseIng
// address: 0x4101714
// body: available
// range: 0x4101714-0x4101c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41018f0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4101a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4101c38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4101c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4101c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4101c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4101c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4101c50 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04101b20) */
/* WARNING: Removing unreachable block (ram,0x04101c4c) */

void AnhPD_FoodOrder_CookingStationCombineMultiChoice__ResolveBaseIng(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_68;
  long **pplStack_60;
  long *local_58;
  
  if ((DAT_09516172 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a758);
    FUN_03f5c2a4(&DAT_0917ae38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091f6e30);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_092066c8);
    FUN_03f5c2a4(&DAT_091ffb70);
    FUN_03f5c2a4(&DAT_0921a0d0);
    FUN_03f5c2a4(&DAT_091ffb78);
    DAT_09516172 = 1;
  }
  local_58 = (long *)0x0;
  puVar13 = (undefined8 *)(param_1 + 0xa0);
  *puVar13 = 0;
  thunk_FUN_03f5d7b8(puVar13,0);
  puVar12 = (undefined8 *)(param_1 + 0xa8);
  *puVar12 = 0;
  thunk_FUN_03f5d7b8(puVar12,0);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(int *)(*(long *)(param_1 + 0x58) + 0x18) < 2)) {
    *puVar12 = DAT_091ffb78;
    thunk_FUN_03f5d7b8(puVar12);
    return;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  plVar4 = (long *)AnhPD_FoodOrder_CookingStationCombineMultiChoice__SlotsOf(param_1,0);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a758) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04101900;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a758,0);
LAB_04101900:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    pplStack_60 = &local_58;
    local_68 = 0;
    do {
      local_58 = plVar4;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0410198c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0410198c:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      plVar4 = local_58;
      if ((uVar10 & 1) == 0) {
        if (local_58 == (long *)0x0) goto LAB_04101b14;
        lVar8 = *local_58;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_04101aec;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_04101ad4;
      }
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *local_58;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ae38) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_041019f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917ae38,0);
LAB_041019f0:
      lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar8 + 0x10),0);
      plVar4 = local_58;
      if ((uVar10 & 1) == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar10 = FUN_057e1004(lVar3,*(undefined8 *)(lVar8 + 0x10),DAT_091b0590);
        plVar4 = local_58;
        if (((uVar10 & 1) == 0) &&
           (uVar10 = AnhPD_FoodOrder_CookingStationCombineMultiChoice__IsInEveryGroup
                               (param_1,*(undefined8 *)(lVar8 + 0x10)), lVar2 = DAT_091b0570,
           plVar4 = local_58, (uVar10 & 1) != 0)) {
          lVar9 = *(long *)(lVar3 + 0x10);
          uVar7 = *(undefined8 *)(lVar8 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8();
            plVar4 = local_58;
          }
          else {
            FUN_057e0c68(lVar3,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            plVar4 = local_58;
          }
        }
      }
    } while( true );
  }
  goto LAB_04101c48;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04101ad4:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04101b08;
    }
  }
LAB_04101aec:
  puVar5 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_04101b08:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_04101b14:
  uVar7 = DAT_092066c8;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      *puVar12 = DAT_092066c8;
    }
    else {
      uVar7 = FUN_057e0998(lVar3,0,DAT_091b0610);
      *puVar13 = uVar7;
      thunk_FUN_03f5d7b8(puVar13,uVar7);
      if (*(int *)(lVar3 + 0x18) < 2) {
        return;
      }
      local_68 = CONCAT44(local_68._4_4_,*(int *)(lVar3 + 0x18));
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_68);
      uVar6 = System_String__Join(DAT_091f86e8,lVar3,0);
      uVar7 = System_String__Format(DAT_091ffb70,uVar7,uVar6,0);
      uVar6 = FUN_057e0998(lVar3,0,DAT_091b0610);
      uVar7 = System_String__Concat(uVar7,DAT_0921a0d0,uVar6,DAT_091f6e30,0);
      *puVar12 = uVar7;
    }
    thunk_FUN_03f5d7b8(puVar12,uVar7);
    return;
  }
LAB_04101c48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

