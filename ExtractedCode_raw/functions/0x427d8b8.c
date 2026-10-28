// rea decompile_all
// name: CakeOrder.SaveProfile.PetAssistantDataAccess$$GetAssignedPetsEachMap
// address: 0x427d8b8
// body: available
// range: 0x427d8b8-0x427dbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x427dbb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427dbb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427dbbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427dbc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427dbc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_SaveProfile_PetAssistantDataAccess__GetAssignedPetsEachMap(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_095170b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f200);
    FUN_03f5c2a4(&DAT_0919f210);
    FUN_03f5c2a4(&DAT_0919f1f8);
    FUN_03f5c2a4(&DAT_091a04f8);
    FUN_03f5c2a4(&DAT_09176968);
    FUN_03f5c2a4(&DAT_091a6a20);
    FUN_03f5c2a4(&DAT_091a6a28);
    FUN_03f5c2a4(&DAT_091a6a30);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091b9d80);
    FUN_03f5c2a4(&DAT_091bea58);
    DAT_095170b6 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09176968);
  FUN_06fd76bc(lVar3,DAT_0919f1f8);
  if ((((*(long *)(param_1 + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x48), lVar7 == 0)) ||
      (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0)) ||
     (lVar7 = FUN_06fd8278(lVar7,DAT_091a04f8), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06544014(&local_a0,lVar7,DAT_091bea58);
  local_70 = local_90;
  uStack_78 = puStack_98;
  local_80 = local_a0;
  local_a0 = 0;
  puStack_98 = &local_80;
LAB_0427da48:
  while( true ) {
    do {
      uVar4 = FUN_072759a8(&local_80,DAT_091a6a28);
      lVar7 = local_70;
      if ((uVar4 & 1) == 0) {
        FUN_072759a4(&local_80,DAT_091a6a20);
        return lVar3;
      }
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while ((*(char *)(local_70 + 0x18) == '\0') ||
            (uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(local_70 + 0x28),0),
            (uVar4 & 1) != 0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_06fd9fbc(lVar3,*(undefined8 *)(lVar7 + 0x28),&local_88,DAT_0919f210);
    lVar2 = DAT_091b0570;
    if ((uVar4 & 1) != 0) break;
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    lVar8 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar8,DAT_091b0558);
    lVar2 = DAT_091b0570;
    if (lVar8 == 0) {
LAB_0427dbc0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *(long *)(lVar8 + 0x10);
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_0427dbc0;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar8,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    FUN_06fd8454(lVar3,uVar5,lVar8,DAT_0919f200);
  }
  if (local_88 != 0) {
    lVar8 = *(long *)(local_88 + 0x10);
    uVar5 = *(undefined8 *)(lVar7 + 0x10);
    *(int *)(local_88 + 0x1c) = *(int *)(local_88 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(local_88 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(local_88 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar5;
        thunk_FUN_03f5d7b8(puVar9);
      }
      else {
        FUN_057e0c68(local_88,uVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_0427da48;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

