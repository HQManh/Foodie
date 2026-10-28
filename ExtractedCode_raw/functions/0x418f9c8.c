// rea decompile_all
// name: UniRx.Examples.Sample01_ObservableWWW$$Start
// address: 0x418f9c8
// body: available
// range: 0x418f9c8-0x41902cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41902b8 to 0x4c4add0 FUN_04c4add0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41902bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41902c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41902cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample01_ObservableWWW__Start(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_0951678c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174948);
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091744e8);
    FUN_03f5c2a4(&DAT_09174b30);
    FUN_03f5c2a4(&DAT_09174688);
    FUN_03f5c2a4(&DAT_09174398);
    FUN_03f5c2a4(&DAT_09179058);
    FUN_03f5c2a4(&DAT_09179a18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917f9f8);
    FUN_03f5c2a4(&DAT_091d53b8);
    FUN_03f5c2a4(&DAT_091d5390);
    FUN_03f5c2a4(&DAT_091d53d8);
    FUN_03f5c2a4(&DAT_091d5358);
    FUN_03f5c2a4(&DAT_091d5370);
    FUN_03f5c2a4(&DAT_091d50f0);
    FUN_03f5c2a4(&DAT_091d5270);
    FUN_03f5c2a4(&DAT_091d52f0);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091b9e58);
    FUN_03f5c2a4(&DAT_0917e648);
    FUN_03f5c2a4(&DAT_091ef5d0);
    FUN_03f5c2a4(&DAT_091ef5d8);
    FUN_03f5c2a4(&DAT_091ef5e0);
    FUN_03f5c2a4(&DAT_091ef5e8);
    FUN_03f5c2a4(&DAT_091ef5f0);
    FUN_03f5c2a4(&DAT_091ef5f8);
    FUN_03f5c2a4(&DAT_091ef600);
    FUN_03f5c2a4(&DAT_091ef608);
    FUN_03f5c2a4(&DAT_09194078);
    FUN_03f5c2a4(&DAT_0921cdf8);
    FUN_03f5c2a4(&DAT_0921ce68);
    FUN_03f5c2a4(&DAT_0921ce70);
    FUN_03f5c2a4(&DAT_0921ce08);
    FUN_03f5c2a4(&DAT_0921ce10);
    DAT_0951678c = 1;
  }
  uVar1 = UniRx_ObservableWWW__Get(DAT_0921ce08,0,0,0);
  if (*(int *)(DAT_09194078 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194078);
  }
  puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
  lVar6 = puVar3[1];
  if (lVar6 == 0) {
    if (*(int *)(DAT_09194078 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194078);
      puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(lVar6,uVar7,DAT_091ef5d0,0);
    plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 8);
    *plVar2 = lVar6;
    thunk_FUN_03f5d7b8(plVar2,lVar6);
  }
  if (*(int *)(DAT_09194078 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194078);
  }
  puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
  lVar8 = puVar3[2];
  if (lVar8 == 0) {
    if (*(int *)(DAT_09194078 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194078);
      puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar8 = thunk_FUN_03f9944c(DAT_09174688);
    FUN_070a8c30(lVar8,uVar7,DAT_091ef5d8,0);
    plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x10);
    *plVar2 = lVar8;
    thunk_FUN_03f5d7b8(plVar2,lVar8);
  }
  FUN_04c4ba98(uVar1,lVar6,lVar8,DAT_091d53d8);
  uVar1 = UniRx_ObservableWWW__Get(DAT_0921ce10,0,0,0);
  if (*(int *)(DAT_09194078 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194078);
  }
  puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
  lVar6 = puVar3[3];
  if (lVar6 == 0) {
    if (*(int *)(DAT_09194078 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194078);
      puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03f9944c(DAT_09179058);
    FUN_05324070(lVar6,uVar7,DAT_091ef5e8,0);
    plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x18);
    *plVar2 = lVar6;
    thunk_FUN_03f5d7b8(plVar2,lVar6);
  }
  if (*(int *)(DAT_09194078 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194078);
  }
  puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
  lVar8 = puVar3[4];
  if (lVar8 == 0) {
    if (*(int *)(DAT_09194078 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194078);
      puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar8 = thunk_FUN_03f9944c(DAT_09179a18);
    FUN_05331a8c(lVar8,uVar7,DAT_091ef5f0,0);
    plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x20);
    *plVar2 = lVar8;
    thunk_FUN_03f5d7b8(plVar2,lVar8);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_04c445b0(uVar1,lVar6,lVar8,DAT_091d5270);
  if (*(int *)(DAT_09194078 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09194078);
  }
  puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
  lVar6 = puVar3[5];
  if (lVar6 == 0) {
    if (*(int *)(DAT_09194078 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194078);
      puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03f9944c(DAT_09174398);
    FUN_070a8c30(lVar6,uVar7,DAT_091ef5f8,0);
    plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x28);
    *plVar2 = lVar6;
    thunk_FUN_03f5d7b8(plVar2,lVar6);
  }
  plVar2 = (long *)FUN_04c4b694(uVar1,lVar6,DAT_091d5370);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0418ff2c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0418ff2c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar2 = (long *)FUN_03f5c394(DAT_0917f9f8,3);
    lVar6 = UniRx_ObservableWWW__Get(DAT_0921ce10,0,0,0);
    if (plVar2 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0)) {
LAB_041902c4:
        uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar6;
        thunk_FUN_03f5d7b8(plVar2 + 4,lVar6);
        lVar6 = UniRx_ObservableWWW__Get(DAT_0921cdf8,0,0,0);
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
        goto LAB_041902c4;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
          plVar2[5] = lVar6;
          thunk_FUN_03f5d7b8(plVar2 + 5,lVar6);
          lVar6 = UniRx_ObservableWWW__Get(DAT_0921ce68,0,0,0);
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
          goto LAB_041902c4;
          if (2 < *(uint *)(plVar2 + 3)) {
            plVar2[6] = lVar6;
            thunk_FUN_03f5d7b8(plVar2 + 6,lVar6);
            if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = FUN_04c48948(plVar2,DAT_091d52f0);
            if (*(int *)(DAT_09194078 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09194078);
            }
            puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
            lVar6 = puVar3[6];
            if (lVar6 == 0) {
              if (*(int *)(DAT_09194078 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09194078);
                puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
              }
              uVar7 = *puVar3;
              lVar6 = thunk_FUN_03f9944c(DAT_091744e8);
              FUN_070a8c30(lVar6,uVar7,DAT_091ef600,0);
              plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x30);
              *plVar2 = lVar6;
              thunk_FUN_03f5d7b8(plVar2,lVar6);
            }
            FUN_04c4b694(uVar1,lVar6,DAT_091d5390);
            uVar1 = thunk_FUN_03f9944c(DAT_0917e648);
            FUN_0607b6e8(uVar1,DAT_091b9e58);
            if (*(int *)(DAT_09194078 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
            lVar6 = puVar3[7];
            if (lVar6 == 0) {
              if (*(int *)(DAT_09194078 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
              }
              uVar7 = *puVar3;
              lVar6 = thunk_FUN_03f9944c(DAT_09174948);
              FUN_071c30b0(lVar6,uVar7,DAT_091ef608,0);
              plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x38);
              *plVar2 = lVar6;
              thunk_FUN_03f5d7b8(plVar2,lVar6);
            }
            FUN_04c4b794(uVar1,lVar6,DAT_091d53b8);
            uVar1 = UniRx_ObservableWWW__Get(DAT_0921ce10,0,uVar1,0);
            FUN_04c4add0(uVar1,DAT_091d5358);
            uVar1 = UniRx_ObservableWWW__Get(DAT_0921ce70,0,0,0);
            if (*(int *)(DAT_09194078 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09194078);
            }
            puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
            lVar6 = puVar3[8];
            if (lVar6 == 0) {
              if (*(int *)(DAT_09194078 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09194078);
                puVar3 = *(undefined8 **)(DAT_09194078 + 0xb8);
              }
              uVar7 = *puVar3;
              lVar6 = thunk_FUN_03f9944c(DAT_09174b30);
              FUN_070a8c30(lVar6,uVar7,DAT_091ef5e0,0);
              plVar2 = (long *)(*(long *)(DAT_09194078 + 0xb8) + 0x40);
              *plVar2 = lVar6;
              thunk_FUN_03f5d7b8(plVar2,lVar6);
            }
            if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = FUN_04c39eb4(uVar1,lVar6,DAT_091d50f0);
            FUN_04c4add0(uVar1,DAT_091d5358);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

