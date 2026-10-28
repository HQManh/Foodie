// rea decompile_all
// name: System.Runtime.Serialization.ObjectIDGenerator$$GetId
// address: 0x74ae5a8
// body: available
// range: 0x74ae5a8-0x74ae727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ae6b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae6b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae718 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae724 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Serialization_ObjectIDGenerator__GetId(long param_1,long param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  byte local_44 [4];
  
  local_44[0] = 0;
  if (param_2 == 0) {
    uVar6 = thunk_FUN_03fc39d4(&DAT_09209418);
    uVar6 = System_Environment__GetResourceString(uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092201e0);
    System_ArgumentNullException___ctor(uVar4,uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d4ef8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar6);
  }
  uVar3 = System_Runtime_Serialization_ObjectIDGenerator__FindElement(param_1,param_2,local_44);
  bVar2 = local_44[0];
  if (local_44[0] == 0) {
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar7 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar7 == 0) {
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if (uVar3 < *(uint *)(plVar9 + 3)) {
        plVar9[(long)(int)uVar3 + 4] = param_2;
        thunk_FUN_03f5d7b8(plVar9 + (long)(int)uVar3 + 4,param_2);
        lVar8 = (long)*(int *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        iVar1 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar1;
        if (lVar7 == 0) goto LAB_074ae6b4;
        if ((uVar3 < *(uint *)(lVar7 + 0x18)) &&
           (*(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = lVar8, uVar3 < *(uint *)(lVar7 + 0x18))
           ) {
          if ((*(int *)(param_1 + 0x14) << 2) >> 1 < iVar1) {
            System_Runtime_Serialization_ObjectIDGenerator__Rehash(param_1);
          }
          goto LAB_074ae68c;
        }
      }
LAB_074ae6b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        lVar8 = *(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
LAB_074ae68c:
        *param_3 = bVar2 ^ 1;
        return lVar8;
      }
      goto LAB_074ae6b0;
    }
  }
LAB_074ae6b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

