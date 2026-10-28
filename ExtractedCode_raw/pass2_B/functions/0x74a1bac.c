// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ConstructionCall$$InitMethodProperty
// address: 0x74a1bac
// body: available
// range: 0x74a1bac-0x74a1e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a1dc0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a1e10 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a1e3c to 0x74a1e60 System.Runtime.Remoting.Messaging.MethodCall$$InitMethodProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a1e5c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_ConstructionCall__InitMethodProperty
               (long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09521387 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852c8);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09216a60);
    FUN_03f5c2a4(&DAT_09216a88);
    FUN_03f5c2a4(&DAT_09216a68);
    FUN_03f5c2a4(&DAT_09216a80);
    FUN_03f5c2a4(&DAT_09216a58);
    DAT_09521387 = 1;
  }
  uVar2 = System_String__op_Equality(param_2,DAT_09216a68,0);
  uVar8 = DAT_091852c8;
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality(param_2,DAT_09216a80,0);
    uVar8 = DAT_09180318;
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__op_Equality(param_2,DAT_09216a58,0);
      lVar3 = DAT_095354b8;
      plVar4 = param_3;
      if ((uVar2 & 1) == 0) {
        uVar2 = System_String__op_Equality(param_2,DAT_09216a88,0);
        uVar8 = DAT_09185f80;
        if ((uVar2 & 1) != 0) {
          if (param_3 == (long *)0x0) {
            plVar4 = (long *)0x0;
            plVar6 = (long *)(param_1 + 0x78);
            *plVar6 = 0;
            goto LAB_074a1db4;
          }
          lVar3 = thunk_FUN_03f99350(param_3,DAT_09185f80);
          uVar7 = DAT_09185f80;
          if (lVar3 == 0) goto LAB_074a1e54;
          plVar6 = (long *)(param_1 + 0x78);
          *plVar6 = lVar3;
          goto LAB_074a1cc4;
        }
        uVar2 = System_String__op_Equality(param_2,DAT_09216a60,0);
        lVar3 = DAT_09535468;
        if ((uVar2 & 1) == 0) {
          System_Runtime_Remoting_Messaging_MethodCall__InitMethodProperty(param_1,param_2,param_3);
          return;
        }
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)(param_1 + 0x88);
          *plVar6 = 0;
          goto LAB_074a1db4;
        }
        if (*param_3 != DAT_09535468) goto LAB_074a1e0c;
        plVar6 = (long *)(param_1 + 0x88);
        *plVar6 = (long)param_3;
        lVar5 = *param_3;
      }
      else {
        if (param_3 == (long *)0x0) {
          plVar6 = (long *)(param_1 + 0x80);
          *plVar6 = 0;
          goto LAB_074a1db4;
        }
        bVar1 = *(byte *)(DAT_095354b8 + 0x130);
        if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_095354b8))
        goto LAB_074a1e0c;
        plVar6 = (long *)(param_1 + 0x80);
        *plVar6 = (long)param_3;
        if (*(byte *)(*param_3 + 0x130) < bVar1) goto LAB_074a1e0c;
        lVar5 = *(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8);
      }
      if (lVar5 != lVar3) {
LAB_074a1e0c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3);
      }
      goto LAB_074a1db4;
    }
    if (param_3 == (long *)0x0) {
      plVar4 = (long *)0x0;
      plVar6 = (long *)(param_1 + 0x70);
      *plVar6 = 0;
      goto LAB_074a1db4;
    }
    lVar3 = thunk_FUN_03f99350(param_3,DAT_09180318);
    uVar7 = DAT_09180318;
    if (lVar3 == 0) goto LAB_074a1e54;
    plVar6 = (long *)(param_1 + 0x70);
    *plVar6 = lVar3;
  }
  else {
    if (param_3 == (long *)0x0) {
      plVar4 = (long *)0x0;
      plVar6 = (long *)(param_1 + 0x68);
      *plVar6 = 0;
      goto LAB_074a1db4;
    }
    lVar3 = thunk_FUN_03f99350(param_3,DAT_091852c8);
    uVar7 = DAT_091852c8;
    if (lVar3 == 0) goto LAB_074a1e54;
    plVar6 = (long *)(param_1 + 0x68);
    *plVar6 = lVar3;
  }
LAB_074a1cc4:
  plVar4 = (long *)thunk_FUN_03f99350(param_3,uVar7);
  uVar8 = uVar7;
  if (plVar4 == (long *)0x0) {
LAB_074a1e54:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_3,uVar8);
  }
LAB_074a1db4:
  thunk_FUN_03f5d7b8(plVar6,plVar4);
  return;
}

