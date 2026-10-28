// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$MakeGenericMethod
// address: 0x74f031c
// body: available
// range: 0x74f031c-0x74f0633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74f04a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f04a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f0514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f05fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeMethodInfo__MakeGenericMethod(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_0952161b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_0952161b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921f5d8);
    System_ArgumentNullException___ctor(uVar5,uVar4,0);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar5 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_0921ff88);
      System_InvalidOperationException___ctor(uVar5,uVar4,0);
    }
    else {
      lVar3 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar7 = (int)*(ulong *)(lVar3 + 0x18);
      if (iVar7 == *(int *)(param_2 + 0x18)) {
        if (0 < iVar7) {
          uVar2 = 0;
          bVar1 = false;
          uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar9 = *(long **)(param_2 + 0x20 + uVar2 * 8);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Type__op_Equality(plVar9,0,0);
            if ((uVar8 & 1) != 0) {
              thunk_FUN_03fc39d4(&DAT_09181550);
              uVar5 = thunk_FUN_03f9944c();
              System_ArgumentNullException___ctor(uVar5,0);
              goto LAB_074f0490;
            }
            if (plVar9 == (long *)0x0) {
LAB_074f0410:
              plVar9 = (long *)0x0;
            }
            else {
              if (*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) goto LAB_074f0410;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 +
                           -8) != DAT_0918a400) {
                plVar9 = (long *)0x0;
              }
            }
            uVar8 = (ulong)*(uint *)(param_2 + 0x18);
            uVar2 = uVar2 + 1;
            bVar1 = (bool)(plVar9 == (long *)0x0 | bVar1);
          } while ((long)uVar2 < (long)(int)*(uint *)(param_2 + 0x18));
          if (bVar1) {
            thunk_FUN_03fc39d4(&DAT_09188920);
            uVar5 = thunk_FUN_03f9944c();
            uVar4 = thunk_FUN_03fc39d4(&DAT_092129c8);
            System_NotSupportedException___ctor(uVar5,uVar4,0);
            goto LAB_074f0490;
          }
        }
        lVar3 = FUN_03f65bbc(param_1,param_2);
        if (lVar3 == 0) {
          lVar3 = (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
          FUN_039b1d98();
          local_44 = (undefined4)*(undefined8 *)(lVar3 + 0x18);
          uVar4 = FUN_03f5c42c(DAT_09535420,&local_44);
          FUN_039b1d98(param_2);
          local_48 = (undefined4)*(undefined8 *)(param_2 + 0x18);
          uVar5 = FUN_03f5c42c(DAT_09535420,&local_48);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920f828);
          uVar4 = System_String__Format(uVar6,uVar4,uVar5,0);
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          System_ArgumentException___ctor(uVar5,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d8190);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar4);
        }
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09204878);
      System_ArgumentException___ctor(uVar5,uVar4,0);
    }
  }
LAB_074f0490:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d8190);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

