// rea decompile_all
// name: System.MonoCustomAttrs$$GetPseudoCustomAttributesData
// address: 0x76056a4
// body: available
// range: 0x76056a4-0x76058d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76058c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76058c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76058d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_MonoCustomAttrs__GetPseudoCustomAttributesData(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_09521fef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171220);
    FUN_03f5c2a4(&DAT_0917fdb0);
    FUN_03f5c2a4(&DAT_09183040);
    FUN_03f5c2a4(&DAT_09172c38);
    DAT_09521fef = 1;
  }
  if (param_1 == 0) goto LAB_076058c4;
  uVar1 = System_Type__get_Attributes(param_1,0);
  uVar6 = uVar1 >> 0xd & 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    if ((uVar1 & 0x2000) == 0) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_03f5c394(DAT_0917fdb0,uVar6);
LAB_0760575c:
    uVar4 = DAT_09172c38;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = System_Type__GetTypeFromHandle(uVar4,0);
    if (lVar3 == 0) goto LAB_076058c4;
    uVar4 = System_Type__GetConstructor
                      (lVar3,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar3 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar3,uVar4,0);
    if (plVar2 == (long *)0x0) goto LAB_076058c4;
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_076058cc;
    if ((int)plVar2[3] == 0) goto LAB_076058c8;
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    if ((uVar1 >> 0xc & 1) == 0) {
      return plVar2;
    }
    uVar6 = 1;
  }
  else {
    plVar2 = (long *)FUN_03f5c394(DAT_0917fdb0,uVar6 + 1);
    if ((uVar1 & 0x2000) != 0) goto LAB_0760575c;
    uVar6 = 0;
  }
  uVar4 = DAT_09171220;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_Type__GetTypeFromHandle(uVar4,0);
  if (lVar3 != 0) {
    uVar4 = System_Type__GetConstructor
                      (lVar3,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar3 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar3,uVar4,0);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 == 0) ||
         (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 != 0)) {
        if (uVar6 < *(uint *)(plVar2 + 3)) {
          plVar2[(ulong)uVar6 + 4] = lVar3;
          thunk_FUN_03f5d7b8(plVar2 + (ulong)uVar6 + 4,lVar3);
          return plVar2;
        }
LAB_076058c8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
LAB_076058cc:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
  }
LAB_076058c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

