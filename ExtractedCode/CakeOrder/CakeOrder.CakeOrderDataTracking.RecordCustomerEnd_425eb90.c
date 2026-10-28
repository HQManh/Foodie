// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$RecordCustomerEnd
// address: 0x425eb90
// body: available
// range: 0x425eb90-0x425efab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425efa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__RecordCustomerEnd
               (float param_1,undefined4 param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  long local_58;
  int local_48;
  undefined4 local_44;
  
  local_44 = param_2;
  if ((DAT_09516f64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_0919dfc0);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09221a28);
    FUN_03f5c2a4(&DAT_09225818);
    FUN_03f5c2a4(&DAT_0921ab00);
    FUN_03f5c2a4(&DAT_0921a078);
    FUN_03f5c2a4(&DAT_0921ec10);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_0921a080);
    FUN_03f5c2a4(&DAT_0921a058);
    DAT_09516f64 = 1;
  }
  local_58 = 0;
  local_48 = 0;
  uVar3 = FUN_05a8eda4(DAT_091b4930);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar7 == 0) goto LAB_0425efa8;
  }
  if (*(char *)(lVar7 + 0x4c) != '\0') {
    return;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar7 == 0) goto LAB_0425efa8;
  }
  if (*(long *)(lVar7 + 0x40) != 0) {
    uVar3 = FUN_06ef1fe8(*(long *)(lVar7 + 0x40),param_2,&local_58,DAT_0919dfc0);
    lVar7 = DAT_09182280;
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (local_58 != 0) {
      if (*(char *)(local_58 + 0x14) != '\0') {
        return;
      }
      *(undefined1 *)(local_58 + 0x14) = 1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar7 = DAT_09182280;
      }
      uVar5 = DAT_091b4928;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 != 0) {
        local_48 = *(int *)(lVar7 + 0x48);
        *(int *)(lVar7 + 0x48) = local_48 + 1;
        lVar7 = FUN_039af8ec(uVar5);
        lVar4 = FUN_03f5c394(DAT_09180358,5);
        lVar8 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
        if (lVar8 != 0) {
          uVar9 = *(undefined8 *)(lVar8 + 0x18);
          uVar5 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(uVar5,DAT_0921e6b0,uVar9,0);
          if (lVar4 != 0) {
            FUN_039b0da0(lVar4,uVar5);
            FUN_039af17c(lVar4,0,uVar5);
            uVar5 = System_Int32__ToString(&local_44,0);
            uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(uVar9,DAT_0921a078,uVar5,0);
            FUN_039b0da0(lVar4,uVar9);
            FUN_039af17c(lVar4,1,uVar9);
            uVar5 = System_Int32__ToString(&local_48,0);
            uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(uVar9,DAT_0921a080,uVar5,0);
            FUN_039b0da0(lVar4,uVar9);
            FUN_039af17c(lVar4,2,uVar9);
            uVar9 = DAT_09221a28;
            uVar5 = DAT_0921a058;
            puVar1 = &DAT_09225818;
            if ((param_3 & 1) == 0) {
              puVar1 = &DAT_0921ec10;
            }
            uVar10 = *puVar1;
            uVar6 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(uVar6,uVar9,uVar10,0);
            FUN_039b0da0(lVar4,uVar6);
            FUN_039af17c(lVar4,3,uVar6);
            if (local_58 != 0) {
              param_1 = param_1 - *(float *)(local_58 + 0x10);
              fVar11 = 0.0;
              if (0.0 <= param_1) {
                fVar11 = param_1;
              }
              iVar2 = FUN_04249cc4(fVar11,0);
              uVar9 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(uVar9,DAT_0921ab00,(long)iVar2,0);
              FUN_039b0da0(lVar4,uVar9);
              FUN_039af17c(lVar4,4,uVar9);
              if (lVar7 != 0) {
                IapAdsSystem_DataTrackingManager__LogEvent(lVar7,uVar5,lVar4,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0425efa8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

