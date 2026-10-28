// rea decompile_all
// name: System.Threading.Timer.Scheduler$$RunSchedulerLoop
// address: 0x762bc04
// body: available
// range: 0x762bc04-0x762bf83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762be84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Threading_Timer_Scheduler__RunSchedulerLoop(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  if ((DAT_095221af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175b80);
    FUN_03f5c2a4(&DAT_091b0f58);
    FUN_03f5c2a4(&DAT_091b0f60);
    FUN_03f5c2a4(&DAT_091b0f68);
    FUN_03f5c2a4(&DAT_091b0f70);
    FUN_03f5c2a4(&DAT_091b0f78);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091950e0);
    DAT_095221af = 1;
  }
  lVar4 = thunk_FUN_03f8f488();
  cVar1 = *(char *)(param_1 + 0x10);
  thunk_FUN_03f6a5cc();
  if (cVar1 != '\0') {
    lVar7 = *(long *)(param_1 + 0x18);
    local_64[0] = 0;
    plVar5 = (long *)FUN_03f5c42c(DAT_091950e0,local_64);
    uVar6 = thunk_FUN_03f9944c(DAT_09175b80);
    if ((plVar5 == (long *)0x0) ||
       (FUN_06d4541c(uVar6,plVar5,*(undefined8 *)(*plVar5 + 400),0), lVar7 == 0)) goto LAB_0762be84;
    FUN_057e280c(lVar7,uVar6,DAT_091b0f60);
    thunk_FUN_03f6a5cc();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    iVar9 = 0;
    lVar8 = 0x7fffffffffffffff;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar9) {
        iVar9 = 0;
        goto LAB_0762bde8;
      }
      lVar7 = FUN_057e0998(lVar7,iVar9,DAT_091b0f70);
      if (lVar7 == 0) break;
      if (*(char *)(lVar7 + 0x41) == '\0') {
        lVar10 = *(long *)(lVar7 + 0x38);
        if (lVar10 <= lVar4) {
          System_Threading_Timer_Scheduler__FireTimer(lVar7,lVar7);
          lVar10 = *(long *)(lVar7 + 0x38);
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = System_Math__Min(lVar8,lVar10,0);
        if ((lVar4 < *(long *)(lVar7 + 0x38)) && (*(long *)(lVar7 + 0x38) != 0x7fffffffffffffff)) {
          *(undefined1 *)(lVar7 + 0x41) = 0;
        }
      }
      lVar7 = *(long *)(param_1 + 0x18);
      iVar9 = iVar9 + 1;
    } while (lVar7 != 0);
  }
  goto LAB_0762be84;
  while( true ) {
    lVar4 = FUN_057e0998(lVar7,iVar9,DAT_091b0f70);
    if (lVar4 == 0) break;
    if (*(char *)(lVar4 + 0x41) == '\0') {
      lVar7 = *(long *)(param_1 + 0x18);
    }
    else {
      *(undefined1 *)(lVar4 + 0x42) = 0;
      thunk_FUN_03f6a5cc();
      lVar4 = *(long *)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x10) = 1;
      if (lVar4 == 0) break;
      uVar6 = FUN_057e0998(lVar4,*(int *)(lVar4 + 0x18) + -1,DAT_091b0f70);
      FUN_057e09ec(lVar4,iVar9,uVar6,DAT_091b0f78);
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 0) break;
      FUN_057e251c(lVar4,*(int *)(lVar4 + 0x18) + -1,DAT_091b0f58);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0762be88;
      iVar9 = iVar9 + -1;
    }
    iVar9 = iVar9 + 1;
    if (lVar7 == 0) break;
LAB_0762bde8:
    if (*(int *)(lVar7 + 0x18) <= iVar9) {
LAB_0762be88:
      cVar1 = *(char *)(param_1 + 0x10);
      thunk_FUN_03f6a5cc();
      if (cVar1 != '\0') {
        lVar4 = *(long *)(param_1 + 0x18);
        local_68[0] = 0;
        plVar5 = (long *)FUN_03f5c42c(DAT_091950e0,local_68);
        uVar6 = thunk_FUN_03f9944c(DAT_09175b80);
        if ((plVar5 == (long *)0x0) ||
           (FUN_06d4541c(uVar6,plVar5,*(undefined8 *)(*plVar5 + 400),0), lVar4 == 0)) break;
        FUN_057e280c(lVar4,uVar6,DAT_091b0f60);
        thunk_FUN_03f6a5cc();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      *(long *)(param_1 + 0x20) = lVar8;
      if (lVar8 == 0x7fffffffffffffff) {
        uVar3 = 0xffffffff;
      }
      else {
        lVar4 = thunk_FUN_03f8f488();
        if (lVar8 - lVar4 < 0x138800000000) {
          auVar2 = SEXT816(lVar8 - lVar4) * SEXT816(0x346dc5d63886594b);
          uVar3 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar3 = 0x7ffffffe;
        }
      }
      return uVar3;
    }
  }
LAB_0762be84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

