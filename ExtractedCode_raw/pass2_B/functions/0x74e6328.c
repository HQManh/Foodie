// rea decompile_all
// name: System.Reflection.CustomAttributeNamedArgument$$.ctor
// address: 0x74e6328
// body: available
// range: 0x74e6328-0x74e65ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e65a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_CustomAttributeNamedArgument___ctor
               (undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_095215bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183058);
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09189788);
    DAT_095215bc = 1;
  }
  uVar2 = System_Reflection_MemberInfo__op_Equality(param_2,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921f4d0);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    goto LAB_074e6594;
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    bVar1 = *(byte *)(lVar7 + 0x130);
    plVar3 = param_2;
    if (bVar1 < *(byte *)(DAT_09184518 + 0x130)) {
      if ((*(byte *)(DAT_09189788 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) ==
          DAT_09189788)) {
LAB_074e643c:
        uVar5 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
        uVar9 = 0;
        goto LAB_074e6470;
      }
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8);
      if (bVar1 < *(byte *)(DAT_09189788 + 0x130)) {
        if (lVar8 == DAT_09184518) {
LAB_074e6458:
          uVar5 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
          uVar9 = 1;
LAB_074e6470:
          thunk_FUN_03f6a5cc();
          param_1[5] = param_2;
          thunk_FUN_03f5d7b8(param_1 + 5,param_2);
          uVar6 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
          param_1[4] = uVar6;
          thunk_FUN_03f5d7b8();
          if ((param_3 == (long *)0x0) || (*param_3 != DAT_09183058)) {
            local_40 = 0;
            uStack_38 = 0;
            System_Reflection_CustomAttributeTypedArgument___ctor(&local_40,uVar5,param_3);
            uVar5 = local_40;
            uVar6 = uStack_38;
          }
          else {
            puVar4 = (undefined8 *)thunk_FUN_03f99594(param_3);
            uVar6 = puVar4[1];
            uVar5 = *puVar4;
          }
          param_1[1] = uVar6;
          *param_1 = uVar5;
          thunk_FUN_03f5d7b8(param_1,0);
          *(undefined1 *)(param_1 + 2) = uVar9;
          uVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
          param_1[3] = uVar5;
          thunk_FUN_03f5d7b8(param_1 + 3,uVar5);
          return;
        }
      }
      else {
        if (lVar8 == DAT_09184518) goto LAB_074e6458;
        if (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
            DAT_09189788) {
          plVar3 = (long *)0x0;
        }
        if (plVar3 != (long *)0x0) goto LAB_074e643c;
      }
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  uVar6 = thunk_FUN_03fc39d4(&DAT_0920f7e8);
  System_ArgumentException___ctor(uVar5,uVar6,0);
LAB_074e6594:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c6e28);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

