// rea decompile_all
// name: CakeOrder.MapToolConfig.<EnumerateToolIds>d__16$$MoveNext
// address: 0x4270330
// body: available
// range: 0x4270330-0x427058f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4270588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x427058c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_MapToolConfig_<EnumerateToolIds>d__16__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09517011 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517011 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_04270524;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_04270464;
  }
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar2 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(uVar2,DAT_091a8698);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar2);
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x28) == 0) {
LAB_04270498:
      if (*(long *)(lVar7 + 0x20) == 0) {
        return 0;
      }
      *(long *)(param_1 + 0x48) = *(long *)(lVar7 + 0x20);
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x48));
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      while( true ) {
        plVar3 = (long *)(param_1 + 0x48);
        lVar7 = *plVar3;
        if (lVar7 == 0) break;
        if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar5) {
          *plVar3 = 0;
          thunk_FUN_03f5d7b8(plVar3,0);
          return 0;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar5) {
LAB_0427058c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(lVar7,0,0);
        if ((uVar4 & 1) != 0) {
          if ((lVar7 == 0) || (*(long *)(param_1 + 0x30) == 0)) break;
          uVar4 = FUN_053ec72c(*(long *)(param_1 + 0x30),*(undefined8 *)(lVar7 + 0x18),DAT_091a86b8)
          ;
          if ((uVar4 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
LAB_04270524:
        uVar5 = *(int *)(param_1 + 0x40) + 1;
        *(uint *)(param_1 + 0x40) = uVar5;
      }
    }
    else {
      *(long *)(param_1 + 0x38) = *(long *)(lVar7 + 0x28);
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x38));
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      while( true ) {
        plVar3 = (long *)(param_1 + 0x38);
        lVar6 = *plVar3;
        if (lVar6 == 0) break;
        if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar5) {
          *plVar3 = 0;
          thunk_FUN_03f5d7b8(plVar3,0);
          if (lVar7 != 0) goto LAB_04270498;
          break;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0427058c;
        lVar6 = *(long *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
        if ((lVar6 != 0) &&
           (uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar6 + 0x10),0), (uVar4 & 1) == 0)
           ) {
          if (*(long *)(param_1 + 0x30) == 0) break;
          uVar4 = FUN_053ec72c(*(long *)(param_1 + 0x30),*(undefined8 *)(lVar6 + 0x10),DAT_091a86b8)
          ;
          if ((uVar4 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x10);
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
LAB_04270464:
        uVar5 = *(int *)(param_1 + 0x40) + 1;
        *(uint *)(param_1 + 0x40) = uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

