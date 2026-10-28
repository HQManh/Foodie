// rea decompile_all
// name: CookingGraph.CookingRuntimeSettings$$Resolve
// address: 0x447bf60
// body: available
// range: 0x447bf60-0x447c5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447c4a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447c4f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447c55c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447c580 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingRuntimeSettings__Resolve
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  if ((DAT_095180a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd90);
    FUN_03f5c2a4(&DAT_09182e38);
    FUN_03f5c2a4(&DAT_091a7fe0);
    FUN_03f5c2a4(&DAT_091a8010);
    FUN_03f5c2a4(&DAT_091a7fd8);
    FUN_03f5c2a4(&DAT_091a8008);
    FUN_03f5c2a4(&DAT_09179d78);
    FUN_03f5c2a4(&DAT_09179d88);
    FUN_03f5c2a4(&DAT_091abf58);
    FUN_03f5c2a4(&DAT_091abef0);
    FUN_03f5c2a4(&DAT_091abf60);
    FUN_03f5c2a4(&DAT_091abf50);
    FUN_03f5c2a4(&DAT_091abee8);
    FUN_03f5c2a4(&DAT_0917bf18);
    FUN_03f5c2a4(&DAT_0917bf30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095180a6 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921c7b8);
    System_ArgumentNullException___ctor(uVar9,uVar8,0);
LAB_0447c4dc:
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c6910);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar8);
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917bf18);
  FUN_057e0400(lVar4,DAT_091abee8);
  lVar5 = thunk_FUN_03f9944c(DAT_09179d78);
  FUN_053eb530(lVar5,DAT_091a7fd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(param_4,0,0);
  if ((uVar3 & 1) == 0) {
    param_4 = CookingGraph_CookingCustomerEatingProfile__get_Default(0);
  }
  while( true ) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(param_4,0,0);
    if ((uVar3 & 1) == 0) break;
    if (lVar5 == 0) goto LAB_0447c4a8;
    uVar3 = FUN_053ec72c(lVar5,param_4,DAT_091a7fe0);
    lVar7 = DAT_091abef0;
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar9 = thunk_FUN_03f9944c();
      puVar10 = &DAT_091ffb00;
LAB_0447c4c8:
      uVar8 = thunk_FUN_03fc39d4(puVar10);
      System_ArgumentException___ctor(uVar9,uVar8,0);
      goto LAB_0447c4dc;
    }
    if (lVar4 == 0) goto LAB_0447c4a8;
    lVar11 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_0447c4a8;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = param_4;
      thunk_FUN_03f5d7b8(plVar6,param_4);
    }
    else {
      FUN_057e0c68(lVar4,param_4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (param_4 == 0) goto LAB_0447c4a8;
    param_4 = *(long *)(param_4 + 0x18);
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917bf30);
  FUN_057e0400(lVar5,DAT_091abf50);
  lVar7 = FUN_03f5c394(DAT_0917fd90,2);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0447c580;
    *(undefined8 *)(lVar7 + 0x20) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20),param_3);
    if (param_1 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar3 & 1) == 0) {
        uVar9 = CookingGraph_CookingGraphOverrideProfile__get_Default(0);
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x78);
      }
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_0447c580;
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x28));
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar3 = 0;
        uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar12 <= uVar3) {
LAB_0447c580:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar14 = *(long *)(lVar7 + uVar3 * 8 + 0x20);
          lVar11 = thunk_FUN_03f9944c(DAT_09179d88);
          FUN_053eb530(lVar11,DAT_091a8008);
          while( true ) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar12 = UnityEngine_Object__op_Inequality(lVar14,0,0);
            if ((uVar12 & 1) == 0) break;
            if (lVar11 == 0) goto LAB_0447c4a8;
            uVar12 = FUN_053ec72c(lVar11,lVar14,DAT_091a8010);
            if ((uVar12 & 1) == 0) {
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar9 = thunk_FUN_03f9944c();
              puVar10 = &DAT_091ffb20;
              goto LAB_0447c4c8;
            }
            if (lVar14 == 0) goto LAB_0447c4a8;
            uVar9 = *(undefined8 *)(lVar14 + 0x18);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar12 = UnityEngine_Object__op_Inequality(uVar9,0,0);
            if ((uVar12 & 1) != 0) {
              uVar9 = *(undefined8 *)(lVar14 + 0x18);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar12 = UnityEngine_Object__op_Inequality(uVar9,param_1,0);
              if ((uVar12 & 1) != 0) {
                FUN_039b1d98(lVar14);
                uVar9 = UnityEngine_Object__GetName(lVar14,0);
                uVar8 = thunk_FUN_03fc39d4(&DAT_09209fc0);
                uVar9 = System_String__Concat(uVar8,uVar9,0);
                thunk_FUN_03fc39d4(&DAT_09181548);
                uVar8 = thunk_FUN_03f9944c();
                System_ArgumentException___ctor(uVar8,uVar9,0);
                uVar9 = thunk_FUN_03fc39d4(&DAT_091c6910);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,uVar9);
              }
            }
            if (lVar5 == 0) goto LAB_0447c4a8;
            uVar12 = FUN_057e1004(lVar5,lVar14,DAT_091abf60);
            lVar2 = DAT_091abf58;
            if ((uVar12 & 1) == 0) {
              lVar13 = *(long *)(lVar5 + 0x10);
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_0447c4a8;
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar14;
                thunk_FUN_03f5d7b8(plVar6,lVar14);
              }
              else {
                FUN_057e0c68(lVar5,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar14 = *(long *)(lVar14 + 0x20);
          }
          uVar3 = uVar3 + 1;
          uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
      if ((uVar3 & 1) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x70);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar3 & 1) == 0) {
          param_2 = CookingGraph_CookingExecutionProfile__get_Default(0);
        }
        else {
          param_2 = *(undefined8 *)(param_1 + 0x70);
        }
      }
      uVar9 = thunk_FUN_03f9944c(DAT_09182e38);
      CookingGraph_CookingRuntimeSettings___ctor(uVar9,param_1,param_2,lVar5,lVar4);
      return uVar9;
    }
  }
LAB_0447c4a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

