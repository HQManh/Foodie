// rea decompile_all
// name: System.Runtime.Remoting.Messaging.IllogicalCallContext$$CreateCopy
// address: 0x749c704
// body: available
// range: 0x749c704-0x749c953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749c948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749c950 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Messaging_IllogicalCallContext__CreateCopy(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_09521358 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186ab8);
    DAT_09521358 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09186ab8);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    thunk_FUN_03f5d7b8();
    plVar3 = *(long **)(param_1 + 0x10);
    if ((plVar3 == (long *)0x0) ||
       (iVar1 = (**(code **)(*plVar3 + 0x3c8))(plVar3,*(undefined8 *)(*plVar3 + 0x3d0)), iVar1 < 1))
    {
      return lVar2;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if ((plVar3 != (long *)0x0) &&
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330)),
       plVar3 != (long *)0x0)) {
      do {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0749c824;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0749c824:
        uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar9 & 1) == 0) {
          return lVar2;
        }
        plVar5 = (long *)System_Runtime_Remoting_Messaging_IllogicalCallContext__get_Datastore
                                   (lVar2);
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185a30) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0749c88c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a30,0);
LAB_0749c88c:
        plVar6 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185a30) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0749c8ec;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a30,1);
LAB_0749c8ec:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) break;
        if ((plVar6 != (long *)0x0) && (*plVar6 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6,DAT_09535468,uVar7);
        }
        (**(code **)(*plVar5 + 0x318))(plVar5,plVar6,uVar7,*(undefined8 *)(*plVar5 + 800));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

