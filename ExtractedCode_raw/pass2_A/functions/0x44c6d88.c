// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingMapPresentation$$ResolveComposite
// address: 0x44c6d88
// body: available
// range: 0x44c6d88-0x44c715b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c6f78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c6fc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c7158 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingMapPresentation__ResolveComposite
          (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((DAT_09518286 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518286 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x50);
  if (lVar10 != 0) {
    uVar3 = *(uint *)(lVar10 + 0x18);
    if ((int)uVar3 < 1) {
      lVar8 = 0;
      uVar12 = 0;
    }
    else {
      uVar11 = 0;
      uVar12 = 0;
      lVar8 = 0;
      do {
        if (uVar3 <= uVar11) goto LAB_044c7158;
        lVar6 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_044c6fc0;
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar7,param_2,0);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = CookOrder_Cooking_Implement_CookingCompositeLookupEntry__Matches(lVar6,param_3),
           (uVar4 & 1) != 0)) {
          if (lVar8 != 0) {
            if ((*(long *)(lVar6 + 0x18) == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_044c6fc0;
            iVar1 = *(int *)(*(long *)(lVar6 + 0x18) + 0x18);
            iVar2 = *(int *)(*(long *)(lVar8 + 0x18) + 0x18);
            if (iVar1 <= iVar2) {
              if (iVar1 == iVar2) {
                uVar7 = *(undefined8 *)(lVar6 + 0x20);
                uVar5 = *(undefined8 *)(lVar8 + 0x20);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar3 = UnityEngine_Object__op_Inequality(uVar7,uVar5,0);
                uVar12 = uVar3 | uVar12;
              }
              goto LAB_044c6e68;
            }
          }
          uVar12 = 0;
          lVar8 = lVar6;
        }
LAB_044c6e68:
        uVar3 = *(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar3);
    }
    if ((uVar12 & 1) != 0) {
      FUN_039b1d98(param_2);
      uVar7 = UnityEngine_Object__GetName(param_2,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091fb828);
      uVar7 = System_String__Concat(uVar5,uVar7,0);
LAB_044c6f40:
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar5 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar5,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091c68a8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar7);
    }
    if (lVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      if (lVar8 != 0) {
        return *(undefined8 *)(lVar8 + 0x20);
      }
    }
    else {
      uVar7 = thunk_FUN_03fc39d4(&DAT_091805f8);
      lVar10 = FUN_03f5c394(uVar7,5);
      if (lVar10 != 0) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_09208a48);
        if (*(int *)(lVar10 + 0x18) != 0) {
          *(undefined8 *)(lVar10 + 0x20) = uVar7;
          thunk_FUN_03f5d7b8();
          if (param_2 == 0) goto LAB_044c6fc0;
          uVar7 = UnityEngine_Object__GetName(param_2,0);
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar10 + 0x28) = uVar7;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x28),uVar7);
            uVar7 = thunk_FUN_03fc39d4(&DAT_091f6440);
            if (2 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x30) = uVar7;
              thunk_FUN_03f5d7b8();
              lVar8 = thunk_FUN_03fc39d4(&DAT_0918f6a0);
              if (*(int *)(lVar8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar8 = thunk_FUN_03fc39d4(&DAT_0918f6a0);
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
              uVar7 = thunk_FUN_03fc39d4(&DAT_091f86d8);
              if (lVar8 == 0) {
                lVar8 = thunk_FUN_03fc39d4(&DAT_0918f6a0);
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar8 = thunk_FUN_03fc39d4(&DAT_0918f6a0);
                uVar9 = **(undefined8 **)(lVar8 + 0xb8);
                thunk_FUN_03fc39d4(&DAT_09178b00);
                lVar8 = thunk_FUN_03f9944c();
                uVar5 = thunk_FUN_03fc39d4(&DAT_091e7f88);
                FUN_05324070(lVar8,uVar9,uVar5,0);
                lVar6 = thunk_FUN_03fc39d4(&DAT_0918f6a0);
                *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar8;
                lVar6 = thunk_FUN_03fc39d4(&DAT_0918f6a0);
                thunk_FUN_03f5d7b8(*(long *)(lVar6 + 0xb8) + 8,lVar8);
              }
              uVar5 = thunk_FUN_03fc39d4(&DAT_091ca508);
              uVar5 = FUN_039b9c7c(param_3,lVar8,uVar5);
              uVar7 = System_String__Join(uVar7,uVar5,0);
              FUN_039b1d98(lVar10);
              FUN_039af17c(lVar10,3,uVar7);
              uVar7 = thunk_FUN_03fc39d4(&DAT_09214720);
              FUN_039af17c(lVar10,4,uVar7);
              uVar7 = System_String__Concat(lVar10,0);
              goto LAB_044c6f40;
            }
          }
        }
LAB_044c7158:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_044c6fc0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

