// rea decompile_all
// name: System.Runtime.Remoting.Messaging.StackBuilderSink$$CheckParameters
// address: 0x74a9b70
// body: available
// range: 0x74a9b70-0x74a9ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a9d6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a9d70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a9ee8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a9ef4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_StackBuilderSink__CheckParameters
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 local_44;
  
  if ((DAT_095213de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a0);
    FUN_03f5c2a4(&DAT_091860a8);
    DAT_095213de = 1;
  }
  uVar6 = DAT_091860a0;
  local_44 = 0;
  if (param_2 != 0) {
    plVar2 = (long *)thunk_FUN_03f99350(param_2,DAT_091860a0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2,uVar6);
    }
    lVar8 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091860a8) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_074a9c34;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091860a8,3);
LAB_074a9c34:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar8 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar9 = *plVar2;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            plVar4 = *(long **)(lVar8 + (ulong)uVar12 * 8 + 0x20);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_091860a8) {
                  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                  goto LAB_074a9ccc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091860a8,8);
LAB_074a9ccc:
            lVar9 = (*(code *)*puVar3)(plVar2,uVar12,puVar3[1]);
            if (plVar4 == (long *)0x0) goto LAB_074a9d6c;
            plVar5 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0))
            ;
            if (plVar5 == (long *)0x0) goto LAB_074a9d6c;
            uVar10 = System_Type__get_IsByRef(plVar5,0);
            if ((uVar10 & 1) != 0) {
              plVar5 = (long *)(**(code **)(*plVar5 + 0x448))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x450));
            }
            if (lVar9 != 0) {
              if (plVar5 == (long *)0x0) goto LAB_074a9d6c;
              uVar10 = (**(code **)(*plVar5 + 0x8d8))(plVar5,lVar9,*(undefined8 *)(*plVar5 + 0x8e0))
              ;
              if ((uVar10 & 1) == 0) {
                uVar6 = thunk_FUN_03fc39d4(&DAT_091805f8);
                uVar6 = FUN_03f5c394(uVar6,7);
                FUN_039b1d98();
                uVar7 = thunk_FUN_03fc39d4(&DAT_091fda58);
                FUN_039af17c(uVar6,0,uVar7);
                FUN_039b1d98(plVar4);
                local_44 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
                uVar7 = System_Int32__ToString(&local_44,0);
                FUN_039af17c(uVar6,1,uVar7);
                uVar7 = thunk_FUN_03fc39d4(&DAT_091f6898);
                FUN_039af17c(uVar6,2,uVar7);
                FUN_039b1d98(lVar9);
                plVar2 = (long *)System_Object__GetType(lVar9,0);
                FUN_039b1d98();
                uVar7 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
                FUN_039af17c(uVar6,3,uVar7);
                uVar7 = thunk_FUN_03fc39d4(&DAT_091f79b8);
                FUN_039af17c(uVar6,4,uVar7);
                FUN_039b1d98(plVar5);
                uVar7 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
                FUN_039af17c(uVar6,5,uVar7);
                uVar7 = thunk_FUN_03fc39d4(&DAT_091f7320);
                FUN_039af17c(uVar6,6,uVar7);
                uVar6 = System_String__Concat(uVar6,0);
                thunk_FUN_03fc39d4(&DAT_09189ec8);
                uVar7 = thunk_FUN_03f9944c();
                System_Runtime_Remoting_RemotingException___ctor(uVar7,uVar6,0);
                uVar6 = thunk_FUN_03fc39d4(&DAT_091d9e28);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar7,uVar6);
              }
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
        return;
      }
    }
  }
LAB_074a9d6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

