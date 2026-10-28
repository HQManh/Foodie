// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$CreateInventorySnapshot
// address: 0x425dc4c
// body: available
// range: 0x425dc4c-0x425e127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425e120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425e124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_CakeOrderDataTracking__CreateInventorySnapshot(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_09516f6d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091aee10);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091aee08);
    FUN_03f5c2a4(&DAT_0917c878);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_092217e0);
    FUN_03f5c2a4(&DAT_092217f0);
    FUN_03f5c2a4(&DAT_092217e8);
    DAT_09516f6d = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917c878);
  FUN_057e0478(lVar3,7,DAT_091aee08);
  uVar4 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar4 & 1) == 0) {
    uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(uVar9,DAT_092217e8,0,0);
    lVar5 = DAT_091aee10;
    if (lVar3 == 0) goto LAB_0425e124;
    lVar8 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_0425e124;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar9;
      thunk_FUN_03f5d7b8(puVar6,uVar9);
    }
    else {
      FUN_057e0c68(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if ((**(long **)(lVar5 + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x48), lVar5 == 0)) goto LAB_0425e124;
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = CakeOrder_CakeOrderDataTracking__<CreateInventorySnapshot>g__Amount_32_0(uVar9);
    uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
    Firebase_Analytics_Parameter___ctor(uVar9,DAT_092217e8,(long)iVar2,0);
    lVar5 = DAT_091aee10;
    if (lVar3 == 0) goto LAB_0425e124;
    lVar8 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_0425e124;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar9;
      thunk_FUN_03f5d7b8(puVar6,uVar9);
    }
    else {
      FUN_057e0c68(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    lVar5 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if ((**(long **)(lVar5 + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x40), lVar5 == 0)) goto LAB_0425e124;
    iVar2 = CakeOrder_CakeOrderDataTracking__<CreateInventorySnapshot>g__Amount_32_0
                      (*(undefined8 *)(lVar5 + 0x18));
    uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
    lVar5 = (long)iVar2;
  }
  Firebase_Analytics_Parameter___ctor(uVar9,DAT_092217f0,lVar5,0);
  lVar5 = DAT_091aee10;
  lVar8 = *(long *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar9;
      thunk_FUN_03f5d7b8(puVar6,uVar9);
    }
    else {
      FUN_057e0c68(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    if (*(int *)(DAT_09182280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09182280 + 0xb8) != 0) {
      FUN_057e185c(&local_78,**(long **)(DAT_09182280 + 0xb8),DAT_091b05a8);
      while( true ) {
        uVar4 = FUN_071bd28c(&local_78,DAT_091a45a0);
        uVar9 = local_68;
        if ((uVar4 & 1) == 0) {
          FUN_071bd288(&local_78,DAT_091a4598);
          return lVar3;
        }
        uVar7 = System_String__Concat(DAT_092217e0,local_68,0);
        if (*(int *)(DAT_09182280 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = CakeOrder_CakeOrderDataTracking__<CreateInventorySnapshot>g__Amount_32_0(uVar9);
        uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
        Firebase_Analytics_Parameter___ctor(uVar9,uVar7,(long)iVar2,0);
        lVar5 = DAT_091aee10;
        lVar8 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = uVar9;
          thunk_FUN_03f5d7b8(puVar6,uVar9);
        }
        else {
          FUN_057e0c68(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_0425e124:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

