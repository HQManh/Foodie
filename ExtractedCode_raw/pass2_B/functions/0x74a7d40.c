// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MonoMethodMessage$$InitMessage
// address: 0x74a7d40
// body: available
// range: 0x74a7d40-0x74a7fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a7fdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7fe0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a7fec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MonoMethodMessage__InitMessage
               (long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  
  if ((DAT_095213c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_095213c4 = 1;
  }
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),param_2);
  if ((param_2 == (long *)0x0) ||
     (lVar1 = (**(code **)(*param_2 + 0x398))(param_2,*(undefined8 *)(*param_2 + 0x3a0)), lVar1 == 0
     )) {
LAB_074a7fdc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar10 = *(ulong *)(lVar1 + 0x18);
  uVar2 = FUN_03f5c394(DAT_09180318,uVar10 & 0xffffffff);
  puVar11 = (undefined8 *)(param_1 + 0x18);
  *puVar11 = uVar2;
  thunk_FUN_03f5d7b8(puVar11,uVar2);
  lVar3 = FUN_03f5c394(DAT_0917fc88,uVar10 & 0xffffffff);
  plVar12 = (long *)(param_1 + 0x28);
  *plVar12 = lVar3;
  thunk_FUN_03f5d7b8(plVar12,lVar3);
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
  uVar2 = DAT_091805f8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar3 = FUN_03f5c394(uVar2,uVar10 & 0xffffffff);
  plVar13 = (long *)(param_1 + 0x20);
  *plVar13 = lVar3;
  thunk_FUN_03f5d7b8(plVar13,lVar3);
  uVar9 = (uint)uVar10;
  if (0 < (int)uVar9) {
    uVar14 = 0;
    lVar3 = 0x20;
    do {
      if (*(uint *)(lVar1 + 0x18) <= uVar14) goto LAB_074a7fe0;
      plVar4 = *(long **)(lVar1 + lVar3);
      if (plVar4 == (long *)0x0) goto LAB_074a7fdc;
      lVar16 = *plVar13;
      uVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      if (lVar16 == 0) goto LAB_074a7fdc;
      if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_074a7fe0;
      *(undefined8 *)(lVar16 + lVar3) = uVar2;
      thunk_FUN_03f5d7b8(lVar16 + lVar3,uVar2);
      uVar14 = uVar14 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar9 != uVar14);
    if (0 < (int)uVar9) {
      lVar3 = 0;
      uVar14 = 0;
      lVar16 = 0x20;
      do {
        uVar15 = (uint)lVar3;
        if (*(uint *)(lVar1 + 0x18) <= uVar15) {
LAB_074a7fe0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(lVar1 + lVar16) == 0) goto LAB_074a7fdc;
        uVar10 = System_Reflection_ParameterInfo__get_IsOut(*(long *)(lVar1 + lVar16),0);
        if (*(uint *)(lVar1 + 0x18) <= uVar15) goto LAB_074a7fe0;
        plVar13 = *(long **)(lVar1 + lVar16);
        if ((plVar13 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0)),
           lVar5 == 0)) goto LAB_074a7fdc;
        uVar6 = System_Type__get_IsByRef(lVar5,0);
        if ((uVar6 & 1) == 0) {
          uVar8 = 5;
          if ((uVar10 & 1) == 0) {
            uVar8 = 1;
          }
        }
        else {
          if (param_3 != 0) {
            if (*(uint *)(param_3 + 0x18) <= uVar14) goto LAB_074a7fe0;
            plVar13 = (long *)*puVar11;
            if (plVar13 == (long *)0x0) goto LAB_074a7fdc;
            lVar5 = *(long *)(param_3 + (long)(int)uVar14 * 8 + 0x20);
            if ((lVar5 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0)) {
              uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar2,0);
            }
            if (*(uint *)(plVar13 + 3) <= uVar15) goto LAB_074a7fe0;
            uVar14 = uVar14 + 1;
            *(long *)((long)plVar13 + lVar16) = lVar5;
            thunk_FUN_03f5d7b8((long)plVar13 + lVar16,lVar5);
          }
          uVar8 = 2;
          if ((uVar10 & 1) == 0) {
            uVar8 = 3;
          }
        }
        lVar5 = *plVar12;
        if (lVar5 == 0) goto LAB_074a7fdc;
        if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_074a7fe0;
        lVar5 = lVar5 + lVar3;
        lVar3 = lVar3 + 1;
        lVar16 = lVar16 + 8;
        *(undefined1 *)(lVar5 + 0x20) = uVar8;
      } while (uVar9 != (uint)lVar3);
    }
  }
  return;
}

