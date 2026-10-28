// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ArgInfo$$.ctor
// address: 0x749dcfc
// body: available
// range: 0x749dcfc-0x749decf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749dec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749decc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_ArgInfo___ctor(long param_1,long param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_09521365 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_09521365 = 1;
  }
  System_Object___ctor(param_1,0);
  plVar8 = (long *)(param_1 + 0x20);
  *plVar8 = param_2;
  thunk_FUN_03f5d7b8(plVar8,param_2);
  plVar8 = (long *)*plVar8;
  if ((plVar8 != (long *)0x0) &&
     (lVar1 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260)), lVar1 != 0)) {
    uVar2 = FUN_03f5c394(DAT_091801b8,*(undefined4 *)(lVar1 + 0x18));
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar2);
    uVar5 = *(uint *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (param_3 == '\0') {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        do {
          if (uVar5 <= (uint)lVar7) goto LAB_0749decc;
          plVar8 = *(long **)(lVar1 + 0x20 + lVar7 * 8);
          if ((plVar8 == (long *)0x0) ||
             (lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
             lVar3 == 0)) goto LAB_0749dec8;
          uVar4 = System_Type__get_IsByRef(lVar3,0);
          if ((uVar4 & 1) == 0) {
            uVar5 = *(uint *)(param_1 + 0x18);
            lVar3 = *(long *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x18) = uVar5 + 1;
            if (lVar3 == 0) goto LAB_0749dec8;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_0749decc;
            *(uint *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = (uint)lVar7;
          }
          uVar5 = *(uint *)(lVar1 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar5);
      }
    }
    else if (0 < (int)uVar5) {
      lVar7 = 0;
      do {
        uVar6 = (uint)lVar7;
        if (uVar5 <= uVar6) {
LAB_0749decc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = *(long **)(lVar1 + 0x20 + lVar7 * 8);
        if ((plVar8 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
           lVar3 == 0)) goto LAB_0749dec8;
        uVar4 = System_Type__get_IsByRef(lVar3,0);
        if ((uVar4 & 1) == 0) {
          if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_0749decc;
          lVar3 = *(long *)(lVar1 + 0x20 + lVar7 * 8);
          if (lVar3 == 0) goto LAB_0749dec8;
          uVar4 = System_Reflection_ParameterInfo__get_IsOut(lVar3,0);
          if ((uVar4 & 1) != 0) goto LAB_0749de08;
        }
        else {
LAB_0749de08:
          uVar5 = *(uint *)(param_1 + 0x18);
          lVar3 = *(long *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x18) = uVar5 + 1;
          if (lVar3 == 0) goto LAB_0749dec8;
          if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_0749decc;
          *(uint *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = uVar6;
        }
        uVar5 = *(uint *)(lVar1 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar5);
    }
    return;
  }
LAB_0749dec8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

