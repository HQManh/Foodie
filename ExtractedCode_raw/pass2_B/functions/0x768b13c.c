// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$.cctor
// address: 0x768b13c
// body: available
// range: 0x768b13c-0x768c2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768c2d8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x768c2e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768c2e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768c2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ConvertUtils___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((DAT_0952256e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170ff0);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_091c6228);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_091713e8);
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_091a0d08);
    FUN_03f5c2a4(&DAT_091a0d00);
    FUN_03f5c2a4(&DAT_09176f40);
    FUN_03f5c2a4(&DAT_091781d0);
    FUN_03f5c2a4(&DAT_091719c8);
    FUN_03f5c2a4(&DAT_09170a18);
    FUN_03f5c2a4(&DAT_09170a28);
    FUN_03f5c2a4(&DAT_09170a40);
    FUN_03f5c2a4(&DAT_09170a70);
    FUN_03f5c2a4(&DAT_091709e0);
    FUN_03f5c2a4(&DAT_09170a10);
    FUN_03f5c2a4(&DAT_09170a30);
    FUN_03f5c2a4(&DAT_09170a20);
    FUN_03f5c2a4(&DAT_09170a88);
    FUN_03f5c2a4(&DAT_091709e8);
    FUN_03f5c2a4(&DAT_09170a68);
    FUN_03f5c2a4(&DAT_09170a38);
    FUN_03f5c2a4(&DAT_09170a90);
    FUN_03f5c2a4(&DAT_091709f8);
    FUN_03f5c2a4(&DAT_09170a80);
    FUN_03f5c2a4(&DAT_09170a08);
    FUN_03f5c2a4(&DAT_091709f0);
    FUN_03f5c2a4(&DAT_09170a98);
    FUN_03f5c2a4(&DAT_091bd3b8);
    FUN_03f5c2a4(&DAT_0917ee08);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_09180758);
    FUN_03f5c2a4(&DAT_0918c260);
    FUN_03f5c2a4(&DAT_091733e8);
    DAT_0952256e = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176f40);
  FUN_06fcd024(lVar1,DAT_091a0d00);
  lVar4 = DAT_09535460;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
  if (lVar1 != 0) {
    FUN_06fcddc0(lVar1,uVar2,2,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709f8,0);
    FUN_06fcddc0(lVar1,uVar2,3,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,4,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709e8,0);
    FUN_06fcddc0(lVar1,uVar2,5,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,6,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a68,0);
    FUN_06fcddc0(lVar1,uVar2,7,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,8,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a30,0);
    FUN_06fcddc0(lVar1,uVar2,9,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,10,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a88,0);
    FUN_06fcddc0(lVar1,uVar2,0xb,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0xc,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a38,0);
    FUN_06fcddc0(lVar1,uVar2,0xd,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0xe,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709f0,0);
    FUN_06fcddc0(lVar1,uVar2,0xf,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0x10,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a90,0);
    FUN_06fcddc0(lVar1,uVar2,0x11,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0x12,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a40,0);
    FUN_06fcddc0(lVar1,uVar2,0x13,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0x14,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a98,0);
    FUN_06fcddc0(lVar1,uVar2,0x15,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0x16,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a70,0);
    FUN_06fcddc0(lVar1,uVar2,0x17,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0x18,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a20,0);
    FUN_06fcddc0(lVar1,uVar2,0x19,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171448,0);
    FUN_06fcddc0(lVar1,uVar2,0x1a,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a08,0);
    FUN_06fcddc0(lVar1,uVar2,0x1b,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171468,0);
    FUN_06fcddc0(lVar1,uVar2,0x1c,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a10,0);
    FUN_06fcddc0(lVar1,uVar2,0x1d,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09171520,0);
    FUN_06fcddc0(lVar1,uVar2,0x1e,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a18,0);
    FUN_06fcddc0(lVar1,uVar2,0x1f,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091719c8,0);
    FUN_06fcddc0(lVar1,uVar2,0x20,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a28,0);
    FUN_06fcddc0(lVar1,uVar2,0x21,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09173188,0);
    FUN_06fcddc0(lVar1,uVar2,0x22,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170a80,0);
    FUN_06fcddc0(lVar1,uVar2,0x23,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170ff0,0);
    FUN_06fcddc0(lVar1,uVar2,0x24,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091709e0,0);
    FUN_06fcddc0(lVar1,uVar2,0x25,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091733e8,0);
    FUN_06fcddc0(lVar1,uVar2,0x26,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    FUN_06fcddc0(lVar1,uVar2,0x27,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
    FUN_06fcddc0(lVar1,uVar2,0x28,DAT_091a0d08);
    uVar2 = System_Type__GetTypeFromHandle(DAT_091713e8,0);
    FUN_06fcddc0(lVar1,uVar2,0x29,DAT_091a0d08);
    **(long **)(DAT_09182b90 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182b90 + 0xb8),lVar1);
    plVar3 = (long *)FUN_03f5c394(DAT_09180758,0x13);
    uVar2 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
    lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
    System_Object___ctor(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (plVar3 != (long *)0x0) {
      lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar1 != 0) {
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar4;
          thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
          uVar2 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
          lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
          System_Object___ctor(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
          *(undefined4 *)(lVar4 + 0x18) = 1;
          lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar1 == 0) goto LAB_0768c2dc;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
            plVar3[5] = lVar4;
            thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
            uVar2 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
            lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
            System_Object___ctor(lVar4,0);
            *(undefined8 *)(lVar4 + 0x10) = uVar2;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
            *(undefined4 *)(lVar4 + 0x18) = 0x29;
            lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar1 == 0) goto LAB_0768c2dc;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar4;
              thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
              uVar2 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
              lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
              System_Object___ctor(lVar4,0);
              *(undefined8 *)(lVar4 + 0x10) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
              *(undefined4 *)(lVar4 + 0x18) = 4;
              lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar1 == 0) goto LAB_0768c2dc;
              if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                plVar3[7] = lVar4;
                thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
                uVar2 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
                lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                System_Object___ctor(lVar4,0);
                *(undefined8 *)(lVar4 + 0x10) = uVar2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                *(undefined4 *)(lVar4 + 0x18) = 2;
                lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar1 == 0) goto LAB_0768c2dc;
                if (4 < *(uint *)(plVar3 + 3)) {
                  plVar3[8] = lVar4;
                  thunk_FUN_03f5d7b8(plVar3 + 8,lVar4);
                  uVar2 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
                  lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                  System_Object___ctor(lVar4,0);
                  *(undefined8 *)(lVar4 + 0x10) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                  *(undefined4 *)(lVar4 + 0x18) = 6;
                  lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                  if (lVar1 == 0) goto LAB_0768c2dc;
                  if (5 < *(uint *)(plVar3 + 3)) {
                    plVar3[9] = lVar4;
                    thunk_FUN_03f5d7b8(plVar3 + 9,lVar4);
                    uVar2 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
                    lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                    System_Object___ctor(lVar4,0);
                    *(undefined8 *)(lVar4 + 0x10) = uVar2;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                    *(undefined4 *)(lVar4 + 0x18) = 0xe;
                    lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar1 == 0) goto LAB_0768c2dc;
                    if (6 < *(uint *)(plVar3 + 3)) {
                      plVar3[10] = lVar4;
                      thunk_FUN_03f5d7b8(plVar3 + 10,lVar4);
                      uVar2 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
                      lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                      System_Object___ctor(lVar4,0);
                      *(undefined8 *)(lVar4 + 0x10) = uVar2;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                      *(undefined4 *)(lVar4 + 0x18) = 8;
                      lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                      if (lVar1 == 0) goto LAB_0768c2dc;
                      if ((*(uint *)(plVar3 + 3) & 0xfffffff8) != 0) {
                        plVar3[0xb] = lVar4;
                        thunk_FUN_03f5d7b8(plVar3 + 0xb,lVar4);
                        uVar2 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
                        lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                        System_Object___ctor(lVar4,0);
                        *(undefined8 *)(lVar4 + 0x10) = uVar2;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                        *(undefined4 *)(lVar4 + 0x18) = 10;
                        lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                        if (lVar1 == 0) goto LAB_0768c2dc;
                        if (8 < *(uint *)(plVar3 + 3)) {
                          plVar3[0xc] = lVar4;
                          thunk_FUN_03f5d7b8(plVar3 + 0xc,lVar4);
                          uVar2 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                          lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                          System_Object___ctor(lVar4,0);
                          *(undefined8 *)(lVar4 + 0x10) = uVar2;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                          *(undefined4 *)(lVar4 + 0x18) = 0xc;
                          lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                          if (lVar1 == 0) goto LAB_0768c2dc;
                          if (9 < *(uint *)(plVar3 + 3)) {
                            plVar3[0xd] = lVar4;
                            thunk_FUN_03f5d7b8(plVar3 + 0xd,lVar4);
                            uVar2 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
                            lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                            System_Object___ctor(lVar4,0);
                            *(undefined8 *)(lVar4 + 0x10) = uVar2;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                            *(undefined4 *)(lVar4 + 0x18) = 0x10;
                            lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                            if (lVar1 == 0) goto LAB_0768c2dc;
                            if (10 < *(uint *)(plVar3 + 3)) {
                              plVar3[0xe] = lVar4;
                              thunk_FUN_03f5d7b8(plVar3 + 0xe,lVar4);
                              uVar2 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
                              lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                              System_Object___ctor(lVar4,0);
                              *(undefined8 *)(lVar4 + 0x10) = uVar2;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                              *(undefined4 *)(lVar4 + 0x18) = 0x12;
                              lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                              if (lVar1 == 0) goto LAB_0768c2dc;
                              if (0xb < *(uint *)(plVar3 + 3)) {
                                plVar3[0xf] = lVar4;
                                thunk_FUN_03f5d7b8(plVar3 + 0xf,lVar4);
                                uVar2 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
                                lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                System_Object___ctor(lVar4,0);
                                *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                *(undefined4 *)(lVar4 + 0x18) = 0x14;
                                lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                                if (lVar1 == 0) goto LAB_0768c2dc;
                                if (0xc < *(uint *)(plVar3 + 3)) {
                                  plVar3[0x10] = lVar4;
                                  thunk_FUN_03f5d7b8(plVar3 + 0x10,lVar4);
                                  uVar2 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
                                  lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                  System_Object___ctor(lVar4,0);
                                  *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                  *(undefined4 *)(lVar4 + 0x18) = 0x16;
                                  lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                                  if (lVar1 == 0) goto LAB_0768c2dc;
                                  if (0xd < *(uint *)(plVar3 + 3)) {
                                    plVar3[0x11] = lVar4;
                                    thunk_FUN_03f5d7b8(plVar3 + 0x11,lVar4);
                                    uVar2 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
                                    lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                    System_Object___ctor(lVar4,0);
                                    *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                    *(undefined4 *)(lVar4 + 0x18) = 0x18;
                                    lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)
                                                              );
                                    if (lVar1 == 0) goto LAB_0768c2dc;
                                    if (0xe < *(uint *)(plVar3 + 3)) {
                                      plVar3[0x12] = lVar4;
                                      thunk_FUN_03f5d7b8(plVar3 + 0x12,lVar4);
                                      uVar2 = System_Type__GetTypeFromHandle(DAT_09171520,0);
                                      lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                      System_Object___ctor(lVar4,0);
                                      *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                      *(undefined4 *)(lVar4 + 0x18) = 0x1e;
                                      lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)
                                                                        (*plVar3 + 0x40));
                                      if (lVar1 == 0) goto LAB_0768c2dc;
                                      if ((*(uint *)(plVar3 + 3) & 0xfffffff0) != 0) {
                                        plVar3[0x13] = lVar4;
                                        thunk_FUN_03f5d7b8(plVar3 + 0x13,lVar4);
                                        uVar2 = System_Type__GetTypeFromHandle(DAT_09171448,0);
                                        lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                        System_Object___ctor(lVar4,0);
                                        *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                        *(undefined4 *)(lVar4 + 0x18) = 0x1a;
                                        lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)
                                                                          (*plVar3 + 0x40));
                                        if (lVar1 == 0) goto LAB_0768c2dc;
                                        if (0x10 < *(uint *)(plVar3 + 3)) {
                                          plVar3[0x14] = lVar4;
                                          thunk_FUN_03f5d7b8(plVar3 + 0x14,lVar4);
                                          uVar2 = System_Type__GetTypeFromHandle
                                                            (DAT_095353e8 + 0x20,0);
                                          lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                          System_Object___ctor(lVar4,0);
                                          *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                          *(undefined4 *)(lVar4 + 0x18) = 0;
                                          lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)
                                                                            (*plVar3 + 0x40));
                                          if (lVar1 == 0) goto LAB_0768c2dc;
                                          if (0x11 < *(uint *)(plVar3 + 3)) {
                                            plVar3[0x15] = lVar4;
                                            thunk_FUN_03f5d7b8(plVar3 + 0x15,lVar4);
                                            uVar2 = System_Type__GetTypeFromHandle
                                                              (DAT_09535468 + 0x20,0);
                                            lVar4 = thunk_FUN_03f9944c(DAT_0918c260);
                                            System_Object___ctor(lVar4,0);
                                            *(undefined8 *)(lVar4 + 0x10) = uVar2;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar2);
                                            *(undefined4 *)(lVar4 + 0x18) = 0x27;
                                            lVar1 = thunk_FUN_03f99350(lVar4,*(undefined8 *)
                                                                              (*plVar3 + 0x40));
                                            if (lVar1 == 0) goto LAB_0768c2dc;
                                            if (0x12 < *(uint *)(plVar3 + 3)) {
                                              plVar3[0x16] = lVar4;
                                              thunk_FUN_03f5d7b8(plVar3 + 0x16,lVar4);
                                              plVar5 = (long *)(*(long *)(DAT_09182b90 + 0xb8) + 8);
                                              *plVar5 = (long)plVar3;
                                              thunk_FUN_03f5d7b8(plVar5,plVar3);
                                              uVar2 = thunk_FUN_03f9944c(DAT_091781d0);
                                              FUN_0530ac4c(uVar2,0,DAT_091c6228,0);
                                              uVar6 = thunk_FUN_03f9944c(DAT_0917ee08);
                                              FUN_06360ee8(uVar6,uVar2,DAT_091bd3b8);
                                              puVar7 = (undefined8 *)
                                                       (*(long *)(DAT_09182b90 + 0xb8) + 0x10);
                                              *puVar7 = uVar6;
                                              thunk_FUN_03f5d7b8(puVar7,uVar6);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
LAB_0768c2dc:
      uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

