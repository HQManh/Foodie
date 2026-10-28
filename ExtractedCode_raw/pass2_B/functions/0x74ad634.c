// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$GetObjectData
// address: 0x74ad634
// body: available
// range: 0x74ad634-0x74ad9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ad830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ad834 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ad92c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ad930 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ad93c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ad9a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Serialization_FormatterServices__GetObjectData(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  uint local_54;
  
  if ((DAT_09521400 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a348);
    FUN_03f5c2a4(&DAT_0918a950);
    DAT_09521400 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    puVar11 = &DAT_092201e0;
  }
  else {
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_2 + 0x18);
      plVar4 = (long *)FUN_03f5c394(DAT_09180318,uVar2);
      if (0 < (int)uVar2) {
        uVar13 = 0;
        lVar14 = 0x20;
        do {
          if (*(uint *)(param_2 + 0x18) <= uVar13) goto LAB_074ad834;
          plVar12 = *(long **)(param_2 + lVar14);
          uVar5 = System_Reflection_MemberInfo__op_Equality(plVar12,0,0);
          if ((uVar5 & 1) != 0) {
            uVar10 = thunk_FUN_03fc39d4(&DAT_09180318);
            uVar10 = FUN_03f5c394(uVar10,1);
            local_54 = uVar13;
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_54);
            FUN_039b1d98(uVar10);
            FUN_039b0da0(uVar10,uVar8);
            FUN_039af17c(uVar10,0,uVar8);
            uVar8 = thunk_FUN_03fc39d4(&DAT_09207a48);
            uVar10 = System_Environment__GetResourceString(uVar8,uVar10,0);
            thunk_FUN_03fc39d4(&DAT_09181550);
            uVar9 = thunk_FUN_03f9944c();
            uVar8 = thunk_FUN_03fc39d4(&DAT_0921f4e8);
            System_ArgumentNullException___ctor(uVar9,uVar8,uVar10,0);
LAB_074ad918:
            uVar10 = thunk_FUN_03fc39d4(&DAT_091ccf70);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar9,uVar10);
          }
          if (plVar12 == (long *)0x0) goto LAB_074ad830;
          iVar3 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          if (iVar3 != 4) {
            uVar10 = thunk_FUN_03fc39d4(&DAT_09209cc8);
            uVar10 = System_Environment__GetResourceString(uVar10,0);
            thunk_FUN_03fc39d4(&DAT_0918a948);
            uVar9 = thunk_FUN_03f9944c();
            System_Runtime_Serialization_SerializationException___ctor(uVar9,uVar10);
            goto LAB_074ad918;
          }
          if (*(byte *)(*plVar12 + 0x130) < *(byte *)(DAT_0918a348 + 0x130)) {
            uVar5 = System_Reflection_FieldInfo__op_Inequality(0,0,0);
            if ((uVar5 & 1) != 0) goto LAB_074ad830;
LAB_074ad7a4:
            if (*plVar12 != DAT_0918a950) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar12);
            }
            lVar6 = System_Runtime_Serialization_SerializationFieldInfo__InternalGetValue
                              (plVar12,param_1,0);
          }
          else {
            plVar1 = plVar12;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_0918a348 + 0x130) * 8 +
                         -8) != DAT_0918a348) {
              plVar1 = (long *)0x0;
            }
            uVar5 = System_Reflection_FieldInfo__op_Inequality(plVar1,0,0);
            if ((uVar5 & 1) == 0) goto LAB_074ad7a4;
            if (plVar1 == (long *)0x0) goto LAB_074ad830;
            (**(code **)(*plVar1 + 0x378))(plVar1,param_1,*(undefined8 *)(*plVar1 + 0x380));
            lVar6 = (**(code **)(*plVar1 + 0x358))(plVar1,param_1,*(undefined8 *)(*plVar1 + 0x360));
          }
          if (plVar4 == (long *)0x0) {
LAB_074ad830:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
            uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar13) {
LAB_074ad834:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(long *)((long)plVar4 + lVar14) = lVar6;
          thunk_FUN_03f5d7b8((long)plVar4 + lVar14,lVar6);
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 8;
        } while (uVar2 != uVar13);
      }
      return plVar4;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    puVar11 = &DAT_0921f4e8;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar11);
  System_ArgumentNullException___ctor(uVar10,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091ccf70);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar8);
}

