// rea decompile_all
// name: System.Resources.ResourceFallbackManager.<GetEnumerator>d__5$$MoveNext
// address: 0x74d3904
// body: available
// range: 0x74d3904-0x74d3b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d3b0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Resources_ResourceFallbackManager_<GetEnumerator>d__5__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_09521550 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521550 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) goto LAB_074d3b0c;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar9 + 0x10);
      thunk_FUN_03f5d7b8();
LAB_074d3a20:
      if (*(long *)(lVar9 + 0x18) != 0) {
        plVar5 = *(long **)(param_1 + 0x30);
        uVar2 = 0;
        if (plVar5 == (long *)0x0) goto LAB_074d3b0c;
        uVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        plVar5 = *(long **)(lVar9 + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_074d3b0c;
        uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        uVar4 = System_String__op_Equality(uVar2,uVar6,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          thunk_FUN_03f5d7b8();
          uVar7 = 1;
          uVar2 = 1;
          goto LAB_074d3ac0;
        }
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_03f5d7b8();
      uVar2 = 1;
      uVar7 = 2;
      goto LAB_074d3ac0;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x28) = 1;
    if (lVar9 == 0) goto LAB_074d3b0c;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      uVar7 = 0xffffffff;
      goto LAB_074d3ac0;
    }
    plVar8 = (long *)(param_1 + 0x30);
    plVar5 = (long *)*plVar8;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = 0;
    if (plVar5 == (long *)0x0) goto LAB_074d3b0c;
    lVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    *plVar8 = lVar3;
    uVar2 = thunk_FUN_03f5d7b8(plVar8,lVar3);
    if (lVar9 == 0) goto LAB_074d3b0c;
    if (*(char *)(lVar9 + 0x20) != '\0') {
      uVar2 = 0;
      if (*plVar8 == 0) goto LAB_074d3b0c;
      uVar4 = System_Globalization_CultureInfo__get_HasInvariantCultureName(*plVar8,0);
      if ((uVar4 & 1) == 0) goto LAB_074d3a20;
    }
  }
  if (*(char *)(lVar9 + 0x20) != '\0') {
    uVar2 = 0;
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_074d3b0c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    uVar4 = System_Globalization_CultureInfo__get_HasInvariantCultureName(*(long *)(lVar9 + 0x10),0)
    ;
    if (((uVar4 & 1) == 0) && (*(char *)(param_1 + 0x28) == '\0')) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8();
      uVar2 = 1;
      uVar7 = 3;
LAB_074d3ac0:
      *(undefined4 *)(param_1 + 0x10) = uVar7;
      return uVar2;
    }
  }
  return 0;
}

