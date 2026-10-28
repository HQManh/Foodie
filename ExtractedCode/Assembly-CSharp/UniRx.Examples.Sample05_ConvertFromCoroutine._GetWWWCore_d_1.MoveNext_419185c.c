// rea decompile_all
// name: UniRx.Examples.Sample05_ConvertFromCoroutine.<GetWWWCore>d__1$$MoveNext
// address: 0x419185c
// body: available
// range: 0x419185c-0x4191b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4191b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UniRx_Examples_Sample05_ConvertFromCoroutine_<GetWWWCore>d__1__MoveNext(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_095167a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0917b280);
    FUN_03f5c2a4(&DAT_0918ce58);
    DAT_095167a6 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = thunk_FUN_03f9944c(DAT_0918ce58);
    UnityEngine_WWW___ctor(uVar1,uVar8,0);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = UnityEngine_WWW__get_isDone(*(long *)(param_1 + 0x38),0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
      if ((uVar2 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar3 = UnityEngine_WWW__get_error(*(long *)(param_1 + 0x38),0);
      plVar7 = *(long **)(param_1 + 0x30);
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar3 == 0) {
        if ((lVar5 != 0) && (uVar1 = UnityEngine_WWW__get_text(lVar5,0), plVar7 != (long *)0x0)) {
          lVar5 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b280) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04191ab0;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b280,0);
LAB_04191ab0:
          (*(code *)*puVar4)(plVar7,uVar1,puVar4[1]);
          plVar7 = *(long **)(param_1 + 0x30);
          if (plVar7 != (long *)0x0) {
            lVar5 = *plVar7;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917b280) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                  goto LAB_04191b18;
                }
                uVar2 = uVar2 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b280,2);
LAB_04191b18:
            (*(code *)*puVar4)(plVar7,puVar4[1]);
            return 0;
          }
        }
      }
      else if (lVar5 != 0) {
        uVar1 = UnityEngine_WWW__get_error(lVar5,0);
        uVar8 = thunk_FUN_03f9944c(DAT_091842a0);
        System_Exception___ctor(uVar8,uVar1,0);
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b280) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_04191a90;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b280,1);
LAB_04191a90:
          (*(code *)*puVar4)(plVar7,uVar8,puVar4[1]);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

