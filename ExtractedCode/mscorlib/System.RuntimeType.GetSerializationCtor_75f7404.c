// rea decompile_all
// name: System.RuntimeType$$GetSerializationCtor
// address: 0x75f7404
// body: available
// range: 0x75f7404-0x75f7633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f7620 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f762c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f7630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_RuntimeType__GetSerializationCtor(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09521f5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_0918a388);
    FUN_03f5c2a4(&DAT_09172c68);
    FUN_03f5c2a4(&DAT_09172f28);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521f5f = 1;
  }
  plVar7 = (long *)(param_1 + 0x28);
  lVar8 = *plVar7;
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Reflection_ConstructorInfo__op_Equality(lVar8,0,0);
  if ((uVar2 & 1) == 0) {
LAB_075f760c:
    return *plVar7;
  }
  plVar3 = (long *)FUN_03f5c394(DAT_09180748,2);
  uVar5 = DAT_09172c68;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar8 = System_Type__GetTypeFromHandle(uVar5,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar8 != 0) &&
     (lVar4 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_075f7624:
    uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar8;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar8);
    lVar8 = System_Type__GetTypeFromHandle(DAT_09172f28,0);
    if ((lVar8 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_075f7624;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar8;
      thunk_FUN_03f5d7b8(plVar3 + 5,lVar8);
      plVar3 = (long *)System_Type__GetConstructor(param_1,0x34,0,3,plVar3,0,0);
      lVar8 = DAT_0918a388;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        *plVar7 = 0;
      }
      else {
        bVar1 = *(byte *)(DAT_0918a388 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar3;
          if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a388) {
            plVar6 = (long *)0x0;
          }
        }
        *plVar7 = (long)plVar6;
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
          plVar3 = (long *)0x0;
        }
      }
      thunk_FUN_03f5d7b8(plVar7,plVar3);
      goto LAB_075f760c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

