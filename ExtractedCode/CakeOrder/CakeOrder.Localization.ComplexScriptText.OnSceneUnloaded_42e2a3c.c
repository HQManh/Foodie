// rea decompile_all
// name: CakeOrder.Localization.ComplexScriptText$$OnSceneUnloaded
// address: 0x42e2a3c
// body: available
// range: 0x42e2a3c-0x42e2e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e2e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e2e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e2e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_ComplexScriptText__OnSceneUnloaded(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_0951743f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_091a07c8);
    FUN_03f5c2a4(&DAT_091a07d8);
    FUN_03f5c2a4(&DAT_091a46b8);
    FUN_03f5c2a4(&DAT_091a6af8);
    FUN_03f5c2a4(&DAT_091a6b00);
    FUN_03f5c2a4(&DAT_091a46c0);
    FUN_03f5c2a4(&DAT_091a6b08);
    FUN_03f5c2a4(&DAT_091a46c8);
    FUN_03f5c2a4(&DAT_091a8770);
    FUN_03f5c2a4(&DAT_091a9278);
    FUN_03f5c2a4(&DAT_091b0ad0);
    FUN_03f5c2a4(&DAT_091b0ae8);
    FUN_03f5c2a4(&DAT_091b0ac0);
    FUN_03f5c2a4(&DAT_0917cdb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e088);
    FUN_03f5c2a4(&DAT_091e6730);
    FUN_03f5c2a4(&DAT_0918ec98);
    DAT_0951743f = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  if (*(int *)(DAT_09182870 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182870);
  }
  lVar6 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x30);
  if (*(int *)(DAT_0918ec98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918ec98 + 0xb8);
  lVar7 = puVar4[1];
  if (lVar7 == 0) {
    if (*(int *)(DAT_0918ec98 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918ec98 + 0xb8);
    }
    uVar8 = *puVar4;
    lVar7 = thunk_FUN_03f9944c(DAT_0917e088);
    FUN_05d78cfc(lVar7,uVar8,DAT_091e6730,0);
    plVar2 = (long *)(*(long *)(DAT_0918ec98 + 0xb8) + 8);
    *plVar2 = lVar7;
    thunk_FUN_03f5d7b8(plVar2,lVar7);
  }
  if (lVar6 != 0) {
    FUN_053edf58(lVar6,lVar7,DAT_091a8770);
    lVar6 = thunk_FUN_03f9944c(DAT_0917cdb8);
    FUN_057e0400(lVar6,DAT_091b0ac0);
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x38);
    if ((lVar7 != 0) && (lVar7 = FUN_06fcda88(lVar7,DAT_091a07d8), lVar7 != 0)) {
      FUN_055edd80(&local_b0,lVar7,DAT_091a9278);
      local_70 = local_a0;
      puStack_78 = puStack_a8;
      local_80 = local_b0;
      local_b0 = 0;
      puStack_a8 = &local_80;
LAB_042e2cec:
      uVar3 = FUN_07273c68(&local_80,DAT_091a6b00);
      uVar8 = local_70;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar8,0,0);
        lVar7 = DAT_091b0ad0;
        if ((uVar3 & 1) != 0) {
          if (lVar6 != 0) {
            lVar5 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *puVar4 = uVar8;
                thunk_FUN_03f5d7b8(puVar4,uVar8);
              }
              else {
                FUN_057e0c68(lVar6,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_042e2cec;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_042e2cec;
      }
      FUN_07273c64(&local_80,DAT_091a6af8);
      if (lVar6 != 0) {
        FUN_057e185c(&local_98,lVar6,DAT_091b0ae8);
        local_b0 = 0;
        puStack_a8 = &local_98;
        while( true ) {
          uVar3 = FUN_071bd28c(&local_98,DAT_091a46c0);
          uVar8 = local_88;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(&local_98,DAT_091a46b8);
            return;
          }
          if (*(int *)(DAT_09182870 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(*(long *)(DAT_09182870 + 0xb8) + 0x38);
          if (lVar6 == 0) break;
          FUN_06fcf2a8(lVar6,uVar8,DAT_091a07c8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

