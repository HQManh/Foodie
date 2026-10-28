// rea decompile_all
// name: Newtonsoft.Json.Converters.XContainerWrapper$$get_ChildNodes
// address: 0x770d3f0
// body: available
// range: 0x770d3f0-0x770d77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770d6d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770d768 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770d76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770d770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770d778 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0770d774) */

long Newtonsoft_Json_Converters_XContainerWrapper__get_ChildNodes(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_095229b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7f8);
    FUN_03f5c2a4(&DAT_0917aef8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ad7c8);
    FUN_03f5c2a4(&DAT_091ad7b8);
    FUN_03f5c2a4(&DAT_0917c448);
    FUN_03f5c2a4(&DAT_0918d620);
    DAT_095229b8 = 1;
  }
  plVar9 = param_1 + 3;
  if (*plVar9 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
    if ((uVar2 & 1) != 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_0917c448);
      FUN_057e0400(lVar3,DAT_091ad7b8);
      param_1[3] = lVar3;
      thunk_FUN_03f5d7b8(plVar9,lVar3);
      lVar3 = Newtonsoft_Json_Converters_XContainerWrapper__get_Container(param_1);
      if ((lVar3 == 0) ||
         (plVar4 = (long *)System_Xml_Linq_XContainer__Nodes(lVar3,0), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917a7f8) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0770d578;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a7f8,0);
LAB_0770d578:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0770d5fc;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_0770d5fc:
        uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar2 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_0770d750;
          lVar3 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_0770d724;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_0770d70c;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917aef8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0770d660;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917aef8,0);
LAB_0770d660:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        lVar10 = *plVar9;
        uVar6 = Newtonsoft_Json_Converters_XContainerWrapper__WrapNode();
        lVar3 = DAT_091ad7c8;
        if (lVar10 == 0) {
LAB_0770d768:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0770d768;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar10,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    if (*(int *)(DAT_0918d620 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *plVar9 = **(long **)(DAT_0918d620 + 0xb8);
    thunk_FUN_03f5d7b8(plVar9);
  }
  goto LAB_0770d750;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
LAB_0770d70c:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0770d740;
    }
  }
LAB_0770d724:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0770d740:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0770d750:
  return *plVar9;
}

