// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$GetMechanicsUsedInLevel
// address: 0x44c3a9c
// body: available
// range: 0x44c3a9c-0x44c45bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c45b8 to 0x66ef798 FUN_066ef798 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c45bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__GetMechanicsUsedInLevel
               (undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0951826c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c98f0);
    FUN_03f5c2a4(&DAT_091c9900);
    FUN_03f5c2a4(&DAT_091c9918);
    FUN_03f5c2a4(&DAT_091ca928);
    FUN_03f5c2a4(&DAT_091ca940);
    FUN_03f5c2a4(&DAT_091ca968);
    FUN_03f5c2a4(&DAT_091ca9b0);
    FUN_03f5c2a4(&DAT_091ca2f8);
    FUN_03f5c2a4(&DAT_091ca3e0);
    FUN_03f5c2a4(&DAT_091ca418);
    FUN_03f5c2a4(&DAT_091ca420);
    FUN_03f5c2a4(&DAT_091cb1a0);
    FUN_03f5c2a4(&DAT_091cb1d0);
    FUN_03f5c2a4(&DAT_091cb1f0);
    FUN_03f5c2a4(&DAT_091cb408);
    FUN_03f5c2a4(&DAT_091cb480);
    FUN_03f5c2a4(&DAT_091cb598);
    FUN_03f5c2a4(&DAT_09178878);
    FUN_03f5c2a4(&DAT_09178ef8);
    FUN_03f5c2a4(&DAT_09178790);
    FUN_03f5c2a4(&DAT_09178808);
    FUN_03f5c2a4(&DAT_09178898);
    FUN_03f5c2a4(&DAT_09178890);
    FUN_03f5c2a4(&DAT_09178f00);
    FUN_03f5c2a4(&DAT_09178580);
    FUN_03f5c2a4(&DAT_09178988);
    FUN_03f5c2a4(&DAT_09178b08);
    FUN_03f5c2a4(&DAT_09178570);
    FUN_03f5c2a4(&DAT_091acfa0);
    FUN_03f5c2a4(&DAT_091ada98);
    FUN_03f5c2a4(&DAT_091ad628);
    FUN_03f5c2a4(&DAT_0917c3e8);
    FUN_03f5c2a4(&DAT_0917c268);
    FUN_03f5c2a4(&DAT_0917c4c0);
    FUN_03f5c2a4(&DAT_091e6da0);
    FUN_03f5c2a4(&DAT_091e6db0);
    FUN_03f5c2a4(&DAT_091e6db8);
    FUN_03f5c2a4(&DAT_091e6da8);
    FUN_03f5c2a4(&DAT_091e6dc0);
    FUN_03f5c2a4(&DAT_091e6dc8);
    FUN_03f5c2a4(&DAT_091e6dd0);
    FUN_03f5c2a4(&DAT_091e6dd8);
    FUN_03f5c2a4(&DAT_091e6de0);
    FUN_03f5c2a4(&DAT_091e6de8);
    FUN_03f5c2a4(&DAT_091e6df0);
    FUN_03f5c2a4(&DAT_091e6df8);
    FUN_03f5c2a4(&DAT_0918eff0);
    FUN_03f5c2a4(&DAT_091bee20);
    DAT_0951826c = 1;
  }
  if (*(long *)(param_2 + 0x120) == 0) {
    uVar5 = thunk_FUN_03f9944c(DAT_0917c3e8);
    FUN_057e0400(uVar5,DAT_091ad628);
    uVar6 = thunk_FUN_03f9944c(DAT_0917c268);
    FUN_0579924c(uVar6,DAT_091acfa0);
    uVar7 = thunk_FUN_03f9944c(DAT_0917c4c0);
    FUN_0579924c(uVar7,DAT_091ada98);
    uVar4 = DAT_091bee20;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
LAB_044c459c:
    FUN_066ef798(param_1,uVar5,uVar6,uVar7,uVar4);
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x120) + 0x28);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
    lVar2 = puVar3[2];
    if (lVar2 == 0) {
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar2 = thunk_FUN_03f9944c(DAT_09178790);
      FUN_05324070(lVar2,uVar5,DAT_091e6da0,0);
      plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x10);
      *plVar1 = lVar2;
      thunk_FUN_03f5d7b8(plVar1,lVar2);
    }
    uVar4 = FUN_04afac50(uVar4,lVar2,DAT_091ca928);
    if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eff0);
    }
    puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
    lVar2 = puVar3[3];
    if (lVar2 == 0) {
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eff0);
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar2 = thunk_FUN_03f9944c(DAT_09178808);
      FUN_05324070(lVar2,uVar5,DAT_091e6da8,0);
      plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x18);
      *plVar1 = lVar2;
      thunk_FUN_03f5d7b8(plVar1,lVar2);
    }
    uVar4 = FUN_04af8044(uVar4,lVar2,DAT_091ca3e0);
    if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eff0);
    }
    puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
    lVar2 = puVar3[4];
    if (lVar2 == 0) {
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eff0);
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar2 = thunk_FUN_03f9944c(DAT_09178570);
      FUN_05322d94(lVar2,uVar5,DAT_091e6dc0,0);
      plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x20);
      *plVar1 = lVar2;
      thunk_FUN_03f5d7b8(plVar1,lVar2);
    }
    uVar4 = FUN_04b0cafc(uVar4,lVar2,DAT_091cb408);
    uVar4 = FUN_04add4b8(uVar4,DAT_091c98f0);
    if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eff0);
    }
    puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
    lVar2 = puVar3[5];
    if (lVar2 == 0) {
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eff0);
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar2 = thunk_FUN_03f9944c(DAT_09178580);
      FUN_05324070(lVar2,uVar5,DAT_091e6dc8,0);
      plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x28);
      *plVar1 = lVar2;
      thunk_FUN_03f5d7b8(plVar1,lVar2);
    }
    uVar4 = FUN_04af8044(uVar4,lVar2,DAT_091ca2f8);
    uVar5 = FUN_04b08b78(uVar4,DAT_091cb1d0);
    if ((*(long *)(param_2 + 0x120) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_2 + 0x120) + 0x20), lVar2 != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      lVar2 = puVar3[6];
      if (lVar2 == 0) {
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        }
        uVar6 = *puVar3;
        lVar2 = thunk_FUN_03f9944c(DAT_09178988);
        FUN_05324070(lVar2,uVar6,DAT_091e6dd0,0);
        plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x30);
        *plVar1 = lVar2;
        thunk_FUN_03f5d7b8(plVar1,lVar2);
      }
      uVar4 = FUN_04afac50(uVar4,lVar2,DAT_091ca940);
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eff0);
      }
      puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      lVar2 = puVar3[7];
      if (lVar2 == 0) {
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eff0);
          puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        }
        uVar6 = *puVar3;
        lVar2 = thunk_FUN_03f9944c(DAT_09178878);
        FUN_05322d94(lVar2,uVar6,DAT_091e6dd8,0);
        plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x38);
        *plVar1 = lVar2;
        thunk_FUN_03f5d7b8(plVar1,lVar2);
      }
      uVar4 = FUN_04b0cafc(uVar4,lVar2,DAT_091cb480);
      if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eff0);
      }
      puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
      lVar2 = puVar3[8];
      if (lVar2 == 0) {
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eff0);
          puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        }
        uVar6 = *puVar3;
        lVar2 = thunk_FUN_03f9944c(DAT_09178890);
        FUN_05323ae4(lVar2,uVar6,DAT_091e6de0,0);
        plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x40);
        *plVar1 = lVar2;
        thunk_FUN_03f5d7b8(plVar1,lVar2);
      }
      uVar4 = FUN_04af7090(uVar4,lVar2,DAT_091ca418);
      uVar4 = FUN_04add400(uVar4,DAT_091c9900);
      uVar6 = FUN_04b087f8(uVar4,DAT_091cb1a0);
      if ((*(long *)(param_2 + 0x120) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_2 + 0x120) + 0x18), lVar2 != 0)) {
        uVar4 = *(undefined8 *)(lVar2 + 0x10);
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        lVar2 = puVar3[9];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
          }
          uVar7 = *puVar3;
          lVar2 = thunk_FUN_03f9944c(DAT_09178b08);
          FUN_05324070(lVar2,uVar7,DAT_091e6de8,0);
          plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x48);
          *plVar1 = lVar2;
          thunk_FUN_03f5d7b8(plVar1,lVar2);
        }
        uVar4 = FUN_04afac50(uVar4,lVar2,DAT_091ca968);
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eff0);
        }
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        lVar2 = puVar3[10];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eff0);
            puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
          }
          uVar7 = *puVar3;
          lVar2 = thunk_FUN_03f9944c(DAT_09178f00);
          FUN_05322d94(lVar2,uVar7,DAT_091e6df0,0);
          plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x50);
          *plVar1 = lVar2;
          thunk_FUN_03f5d7b8(plVar1,lVar2);
        }
        uVar4 = FUN_04b0cafc(uVar4,lVar2,DAT_091cb598);
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eff0);
        }
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        lVar2 = puVar3[0xb];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eff0);
            puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
          }
          uVar7 = *puVar3;
          lVar2 = thunk_FUN_03f9944c(DAT_09178ef8);
          FUN_05324070(lVar2,uVar7,DAT_091e6df8,0);
          plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x58);
          *plVar1 = lVar2;
          thunk_FUN_03f5d7b8(plVar1,lVar2);
        }
        uVar4 = FUN_04afac50(uVar4,lVar2,DAT_091ca9b0);
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eff0);
        }
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        lVar2 = puVar3[0xc];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eff0);
            puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
          }
          uVar7 = *puVar3;
          lVar2 = thunk_FUN_03f9944c(DAT_09178878);
          FUN_05322d94(lVar2,uVar7,DAT_091e6db0,0);
          plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x60);
          *plVar1 = lVar2;
          thunk_FUN_03f5d7b8(plVar1,lVar2);
        }
        uVar4 = FUN_04b0cafc(uVar4,lVar2,DAT_091cb480);
        if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918eff0);
        }
        puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
        lVar2 = puVar3[0xd];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918eff0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918eff0);
            puVar3 = *(undefined8 **)(DAT_0918eff0 + 0xb8);
          }
          uVar7 = *puVar3;
          lVar2 = thunk_FUN_03f9944c(DAT_09178898);
          FUN_05323ae4(lVar2,uVar7,DAT_091e6db8,0);
          plVar1 = (long *)(*(long *)(DAT_0918eff0 + 0xb8) + 0x68);
          *plVar1 = lVar2;
          thunk_FUN_03f5d7b8(plVar1,lVar2);
        }
        uVar4 = FUN_04af7090(uVar4,lVar2,DAT_091ca420);
        uVar4 = FUN_04add400(uVar4,DAT_091c9918);
        uVar7 = FUN_04b087f8(uVar4,DAT_091cb1f0);
        uVar4 = DAT_091bee20;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        goto LAB_044c459c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

